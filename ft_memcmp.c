/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:42:22 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/26 14:10:43 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	unsigned char	*pu;
	unsigned char	*pd;

	pu = (unsigned char *)p1;
	pd = (unsigned char *)p2;
	while (n-- && pu == pd)
	{
		pu++;
		pd++;
	}
	if (pu == pd && n == 0)
		return (0);
	return (pu - pd);
}

#include <string.h>

int	main(void)
{
	printf("Mi funcion: %d \n", ft_memcmp("hola que tal", "hola que tal", 20));
	printf("funcion original: %d \n", memcmp("hoha que tal", "hola que tal",
			20));
	return (0);
}
