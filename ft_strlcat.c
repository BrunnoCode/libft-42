/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:06:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/19 20:53:28 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	d_len;
	size_t	s_len;
	size_t	total_len;
	size_t	i;

	s = (char *)src;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(s);
	total_len = 0;
	i = 0;
	if (dstsize > d_len)
		total_len = s_len + d_len;
	else
		total_len = s_len + dstsize;
	while (src[i] && (d_len + 1) < dstsize)
	{
		dst[d_len] = s[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (total_len);
}
/*
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char		*dst;
	const char	*src;
	size_t		destsize;
	size_t		res;

	if (argc != 4)
		printf("error de argumento");
	else
		dst = argv[1];
	src = argv[2];
	destsize = (size_t)atoi(argv[3]);
	printf("Destino antes de la funcion: \"%s\"\n", dst);
	res = ft_strlcat(dst, src, destsize);
	printf("Destino despues de la funcion: \"%s\"\n", dst);
	printf("Destino antes de la funcion: \"%zu\"\n", res);
	return (0);
}*/
