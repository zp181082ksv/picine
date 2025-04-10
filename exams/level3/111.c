/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   111.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 17:42:08 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int	main(int an, char** av)
{
	int	i;
	i = 0;
	int	size;

	size = an - 1;
	while(av[size][i])
	{
		write(1, &av[size][i], 1);
		i++;
	}
	return (0);
}
