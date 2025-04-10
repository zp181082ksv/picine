/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:30:55 by skozina           #+#    #+#             */
/*   Updated: 2025/04/01 14:00:29 by skozina          ###   ########.fr       */
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

void	print_result(int nbr, char *base, int len)
{
	char	buffer[33];
	int		k;

	k = 0;
	while (nbr > 0)
	{
		buffer[k] = base[nbr % len];
		nbr /= len;
		k++;
	}
	while (k > 0)
		write(1, &buffer[--k], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	if (!validate_base(base))
		return ;
	while (base[len])
		len++;
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	print_result(nbr, base, len);
}
/*int main()
{
    ft_putnbr_base(-45654542, "0123456789");       // Output: 42
    write(1, "\n", 1);
    ft_putnbr_base(-42, "01");              // Output: -101010
    write(1, "\n", 1);
    ft_putnbr_base(255, "0123456789ABCDEF");// Output: FF
    write(1, "\n", 1);
    ft_putnbr_base(255, "poneyvif");        // Output: vif
    write(1, "\n", 1);
    ft_putnbr_base(0, "01");                // Output: 0
    return 0;
}*/
