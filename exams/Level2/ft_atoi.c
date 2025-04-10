/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 14:42:45 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	
	
	i = 0;
	sign = 1;
	result = 0;
		
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		 || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
			
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
			
			 
    	return (result * sign);
}

int	main()
{
	char	a[20];
	char str[] = "";
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

}
