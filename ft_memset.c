/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:28:49 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/16 14:38:16 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	size_t	len;
	int		c;

	len = 10;
	c = 57;
	char str[] = "En un lugar de La Mancha de cuyo nombre no quiero acordarme...";
	printf("memoria completada con\n%s", ft_memset(str, c, len));
	return (0);
}*/
