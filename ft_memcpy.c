/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:57:34 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/16 16:12:20 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ptdst;
	const char	*ptsrc;

	i = 0;
	ptdst = dst;
	ptsrc = src;
	if (dst == 0 && src == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		ptdst[i] = ptsrc[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	size_t	len;

	char dest[] = "";
	char src[] = "estring";
	len = 5;
	printf("La memoria se copia de: %s\n", ft_memcpy(dest, src, len));
	return (0);
}*/
