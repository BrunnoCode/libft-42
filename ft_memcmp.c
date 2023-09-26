/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:42:22 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/26 17:11:27 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	unsigned const char	*pu;
	unsigned const char	*pd;
	size_t				i;

	pu = p1;
	pd = p2;
	i = 0;
	while (i < n)
	{
		if (*pu != *pd)
			return (*pu - *pd);
		pu++;
		pd++;
		i++;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char *str1 = "teste";
	char *str2 = "test";
	printf("Mi funcion: %d \n", ft_memcmp(str1, str2, 10));
	printf("funcion original: %d \n", memcmp(str1, str2, 10));
	return (0);
}*/
