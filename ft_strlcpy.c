/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:10:16 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/14 12:18:08 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize > 0)
	{
		while (src[i] && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	size_t	size;

	char dest[] = "";
	char src[] = "warley";
	size = 3;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	return (0);
}*/
