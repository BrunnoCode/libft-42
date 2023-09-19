/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:06:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/19 15:26:04 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	total_len;
	size_t	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	total_len = d_len + s_len;
	if (dstsize <= d_len)
	{
		return (total_len);
	}
	while (src[i] != '\0' && (d_len + 1) < dstsize)
	{
		dst[d_len] = src[s_len];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (total_len);
}

// #include <string.h>
// int	main(int c, char**v)
// {
// 	if(c == 4)
// 	{
// 		printf("Tu resultado es: '%c'.\n ", ft_strlcat(v[1], v[2], atoi(v[3])));
// 		printf("El resultado Original es: '%lu'.\n ", strlcat(v[1], v[2], atoi(v[3])));
// 	}
// 	else
// 	{
// 		printf("Error de argumentos :D.\n");
// 	}
// 	return (0);
// }