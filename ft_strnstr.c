/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:29:52 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/28 18:24:57 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] && i < len)
	{
		j = 0;
		while (i + j < len && h[i + j] == n[j])
		{
			j++;
			if (!n[j])
				return ((char *)&h[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t		len;
	const char	*h;
	const char	*n;

	h = "hola mi nombre es brunno";
	n = "u";
	len = 14;
	printf("resultado original es: %s \n", strnstr(h, n, len));
	printf("mi funcion es: %s \n", ft_strnstr(h, n, len));
	return (0);
}*/
