/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/10 10:51:35 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>



int	compare(char* s1, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
	
}
void	ft_search(char* s1, char* s2)
{
	int	i;
	int	j;
	
	i = 0;
	while (s1[i])
	{
		if (compare(s1, s1[i], i) == 0)
		{
			j = 0;
			while (s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i],1 );
					break;
				}
				j++;
			}
		}
		i++;
	}
}	

int	main(int an, char** av)
{
	if (an ==3)
		ft_search(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
