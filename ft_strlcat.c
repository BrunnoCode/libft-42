/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:06:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/18 14:14:13 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	char *d;
	char *s;
	int size;
	size_t i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	size = ft_strlen(d);

	if (dst == 0 && src == 0)
		return (NULL);
	while (size > s)
	{
        d
	}
}