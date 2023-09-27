/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:29:52 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/27 19:36:50 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;
	char	*pos;

	i = 0;
	pos = 0;
	while (h[i] && i < len)
	{
		j = 0;
		if (h[i] == n[j] && n[j] != '\0')
		{
			j++;
		}
		if (n[j] == '\0')
			pos = h[i];
		return (pos)
			i++;
	}
	return (pos);
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
	len = 22;
	printf("resultado original es: %s \n", strnstr(h, n, len));
	printf("mi funcion es: %s \n", ft_strnstr(h, n, len));
	return (0);
}
