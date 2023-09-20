/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:06:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/20 11:40:16 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s = (char *)src;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(s);
	i = 0;
	if (dstsize > d_len)
		s_len += d_len;
	else
		s_len += dstsize;
	while (src[i] && (d_len + 1) < dstsize)
	{
		dst[d_len] = s[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (s_len);
}
/*
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char		dst[100] = "mi destino";
	const char	*src = " espero que esto apare haya ejecutado la funcion";
	size_t		destsize;
	size_t		res;

	destsize = 35;
	printf("Destino antes de la funcion: \"%s\"\n", dst);
	res = ft_strlcat(dst, src, destsize);
	printf("Destino despues de la funcion: \"%s\"\n", dst);
	printf("Total despues de la funcion: \"%zu\"\n", res);

	printf("Destino antes de la funcion: \"%s\"\n", dst);
	res = strlcat(dst, src, destsize);
	printf("Destino despues de la funcion: \"%s\"\n", dst);
	printf("Total despues de la funcion: \"%zu\"\n", res);
	return (0);
}*/
