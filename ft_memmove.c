/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:57:28 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/19 16:49:57 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <string.h>
int main(int c, char **v)
{
	if (c == 4)
	{
		printf ("Tu Resultado: '%s'.\n", ft_memmove(v[1], v[2], atoi(v[3])));
		printf ("Resultado Esperado: '%s'.\n", memmove(v[1], v[2], atoi(v[3])));
	}
	else
		printf("error de argumentos :D.\n");
	return (0);
}*/
