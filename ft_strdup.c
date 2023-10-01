/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:22:26 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/01 00:07:30 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	size;
	size_t	i;

	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	size = ft_strlen(s1);
	while (i < size + 1)
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}
/*
#include <string.h>

int	main(void)
{
	const char	*s1;

	s1 = "timur el tio";
	printf("Memoria anterior: %p\n %s\n", (void *)&s1, s1);
	printf("Funcion original: %p\n %s\n\n\n", strdup(s1), strdup(s1));
	// PASSANDO MI FUNCION
	printf("Memoria anterior: %p\n %s\n", (void *)&s1, s1);
	printf("Mi Funcion: %p\n %s\n", ft_strdup(s1), ft_strdup(s1));
	return (0);
}*/
