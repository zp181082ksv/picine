/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 12:26:27 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_nbr(int nbr, char c)
{
	int	i;
		
	i = 0;
	while (i < nbr)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int an, char** av)
{
	int	i;
	int	n;
	i = 0 ;
	if (an == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				 n = av[1][i] - 'a' + 1;
				print_nbr(n, av[1][i]);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				 n = av[1][i] - 'A' + 1;
				print_nbr(n, av[1][i]);
			}
			else
				write(1, &av[1][i], 1);
			i++;
				
		}
	}
	write (1, "\n", 1);
	return (0);
}
