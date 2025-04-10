/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:08:53 by skozina           #+#    #+#             */
/*   Updated: 2025/04/10 16:23:59 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int main(int ac, char const **av)
{
	int i = 0;
	int esp = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if(av[1][i] == ' ' || av[1][i] == '\t')
				esp = 1;
			if(av[1][i] != ' ' &&  av[1][i] != '\t')
			{
				if (esp)
					write(1, "   ", 3);
				esp = 0;
				write(1, &av[1][i], 1);
				
			}
				
			i++;
		
		}
	
	
	}	
	write(1, "\n", 1);
	return (0);
}
