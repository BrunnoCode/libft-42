/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:57:28 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/17 15:02:05 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptdst;
	unsigned char	*ptsrc;

	i = 0;
	ptdst = (unsigned char *)dst;
	ptsrc = (unsigned char *)src;
	if (ptdst == 0 && ptsrc == 0)
		return (NULL);
	if (len == 0)
		return (dst);
	if (ptsrc < ptdst)
	{
		while (i < len)
		{
			ptdst[len - i -1] = ptsrc[len - i - 1];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			ptdst[i] = ptsrc[i];
			i++;
		}
	}
	return (dst);
}

int	main(void)
{
	size_t	len;

	char dst[] = "lskjfladlfakjdf";
	const char src[] = "tudoo bem cara qual e o seu nome";
	len = 19;
	printf("que habia antes en dst? %s\n", dst);
	printf("Ahora dentro de dst hay: %s", ft_memmove(dst, src, len));
	return (0);
}
