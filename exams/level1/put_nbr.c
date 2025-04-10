/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:08:53 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 18:16:24 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	put_nbr(char* nbr)
{
	int	i;
	unsigned int	number;
	i = 0;

	if (nbr < 0)
		write (1, "-", 1);
	number = unsigned(int)(-nbr);
	if (nbr >9)
		put_nbr (nbr / 10);
	

}
	
