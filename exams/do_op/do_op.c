/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:08:53 by skozina           #+#    #+#             */
/*   Updated: 2025/04/10 15:35:55 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	putnbr(char* c)
{
	int	sign;
	int	i;
	int	a;
	
	i = 0;
	sign = 1;
	a = 0;
	while(c[i])
	{
		if(c[0] == '-')
			sign = sign * (-1);

		else
		{
			a = a * 10 + c[i] - '0';
		}
		i++;
	}
	printf("%d", a);
	return (a * sign);
}




int	main(int an, char** av)
{
	int	i;
	int	a;

	if (an ==4)
	{
		if (av[2][0] == '*')
			a =  (putnbr(av[1]) * putnbr(av[3]));
			return(a);	
	}

	printf("%d", a);
	write(1, "\n", 1);
	return (0);
}	
