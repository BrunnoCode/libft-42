/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:14:08 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/25 20:53:48 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	ptr = s;
	i = 0;
	while (ptr[i] && n > i)
	{
		if (ptr[i] == (unsigned char)c && ptr[i] != 0)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
#include <string.h>

int	main(void)
{
	printf("Funcion Original: %s \n", memchr("carambalsjf43", 'f', 2));
	printf("Mi funcion: %s \n", ft_memchr("carambalsjf43", 'f', 2));
	return (0);
}
