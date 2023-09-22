/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:31:35 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/22 18:51:04 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	int	c;

	char s[] = "teste";
	c = 357;
	printf("En tu funcion Hemos encontrado: '%s' \n", ft_strchr(s, c));
	printf("Funcion original: '%s' \n", strchr(s, c));
	printf("Total de Len original: '%ld' \n", strlen(s));
	return (0);
}*/
