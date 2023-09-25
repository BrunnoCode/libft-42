/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:27:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/25 17:41:17 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	while (s[len] != (char)c && len > 0)
	{
		len--;
	}
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	int	c;

	char s[] = "teste";
	c = 'a';
	printf("Resultado de Mi funcion: %s \n", ft_strrchr(s, c));
	printf("Resultado funcion original: %s \n", strrchr(s, c));
	printf("Total de length: '%ld' \n", strlen(s));
	return (0);
}*/
