/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 16:41:08 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int	main(int an, char** av)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (av[1][len])
		len++;
	len = len -1;
	i = 0;
	if (an == 2)
	{
		while (av[1][len] &&  (av[1][len] == ' ' || av[1][len] == '\t'))
			len--;
	
		while (av[1][len] && (av[1][len] != ' ' && av[1][len] != '\t'))
			len --;
		len++;
		while (av[1][len] && (av[1][len] != ' ' || av[1][len] != '\t'))
		{
			write(1, &av[1][len], 1);
			len ++;
		}
	
	
	}




	write (1, "\n", 1);
	return (0);
}
