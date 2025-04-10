/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:30:55 by skozina           #+#    #+#             */
/*   Updated: 2025/04/01 14:32:22 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	c;

	sign = 1;
	c = 0;
	i = 0;
	while (str[i] < '1' || str[i] > '9')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + str[i] - '0';
		i++;
	}
	return (c * sign);
}
/*int	main()
{
	char	a[20];
	char str[] = " dfsw +- df  12 3";
	a[0] = ' ';
	a[1] = ' ';
	a[2] = '-';
	a[3] = '5';
	a[4] = 'g';
	a[5] = 'f';
	a[6] = 'f';
	a[7] = 'f';
	a[8] = '\0';	


	printf("%d", ft_atoi(str));

}*/
