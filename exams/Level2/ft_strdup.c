/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:17:30 by skozina           #+#    #+#             */
/*   Updated: 2025/04/09 15:16:56 by skozina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int	i;
	char*	dup;
	int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dup = (char*)malloc((len+1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main()
{
	char*	c = "sfgsdgbhd";
	printf("%s", ft_strdup(c));
}
