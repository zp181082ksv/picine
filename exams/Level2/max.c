/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 16:58:26 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	max;
	max = tab[0];
	
	i = 0;
	if (len == 0)
		return (0);

	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];

		i++;
	}
	return (max);
}

int	main()
{
	int	c[5] = {1,25,4,8};
	int	len = 4;
	printf("%d", max(c,len));
}
