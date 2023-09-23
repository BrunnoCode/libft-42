/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:27:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/23 18:38:23 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i != 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	char s[] = "teste";
	int c = 357;
	printf("Resultado de Mi funcion: %s \n", ft_strrchr(s, c));
	printf("Resultado funcion original: %s \n", strrchr(s, c));
	printf("Total de length: '%ld' \n", strlen(s));
	return (0);
}*/