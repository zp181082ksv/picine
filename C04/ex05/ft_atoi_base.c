/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:30:55 by skozina           #+#    #+#             */
/*   Updated: 2025/04/01 17:46:40 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	validate_base(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		j = len + 1;
		while (base[j])
		{
			if (base[len] == base[j])
				return (0);
			j++;
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (1);
}


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
	c = c*sign;
	return(c * sign);
}

int	print_result(int nbr, char *base, int len)
{
	int	result;
	int	place;
	int	digit;
	
	place = 1;
	result = 0;
	while (nbr > 0)
	{
		digit = nbr % len;
		result = result + digit * place;
		nbr = nbr / len;
		place = place * len;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	nbr;

	len = 0;
	if (!validate_base(base))
        	return (0); 
	while (base[len])
		len++;
	nbr = (ft_atoi(str));
	if (nbr == 0)
		return (0);
	if (nbr == -2147483648)
	{
		return (-2147483648);
	}
	if (nbr < 0)
		nbr = -nbr;
	return (print_result(nbr, base, len));
}
int main()
{
/*    printf("%d", ft_atoi_base("3547aa", "0123456789"));       // Output: 42
    write(1, "\n", 1);*/
    printf("%d", ft_atoi_base("---465", "01"));              // Output: -101010
    write(1, "\n", 1);
}
/*    ft_atoi_base("sdfsfsfd", "0123456789ABCDEF");// Output: FF
    write(1, "\n", 1);
    ft_atoi_base("dddddqwef554", "poneyvif");        // Output: vif
    write(1, "\n", 1);
    ft_atoi_base("-++dd eda", "01");                // Output: 0
    return 0;
}*/
