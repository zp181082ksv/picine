/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 11:43:20 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_nbr(nbr)
{
	if (nbr > 9)
		print_nbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			print_nbr(i);
		i++;
		write(1, "\n", 1);
	}	

}
