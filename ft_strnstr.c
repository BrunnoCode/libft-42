/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:29:52 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/26 20:36:42 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (!len)
		return (NULL);
	while (len--)
	{
		if (n[c] == h[i])
		{
			while (n && n[c] == h[i])
				c++;
		}
		h++;
	}
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t		len;
	const char	*h;
	const char	*n;

	h = "hola mi nombre es brunno";
	n = "nombre";
	len = 16;
	printf("resultado original es: %s \n", strnstr(h, n, len));
	printf("mi funcion es: %s \n", ft_strnstr(h, n, len));
	return (0);
}
