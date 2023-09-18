/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:06:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/18 19:26:40 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	int		size;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (ft_strlen(dst) != dstsize)
		return ('\0');
	else
	{
		while (s != 0)
		{
			d[dstsize] = s[i];
			i++;
		}
	}
	return (dst + src);
}
#include <string.h>
int	main(int c, char**v)
{
	if(c == 4)
	{
		printf("Tu resultado es: '%c'.\n ", ft_strlcat(v[1], v[2], atoi(v[3])));
		printf("El resultado Original es: '%lu'.\n ", strlcat(v[1], v[2], atoi(v[3])));
	}
	else
	{
		printf("Error de argumentos :D.\n");
	}
	return (0);
}