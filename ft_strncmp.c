/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:51:55 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/25 19:47:48 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	printf("Resultado mi funcion: '%d' \n", ft_strncmp("abcdef", "abc\357xx",
			5));
	printf("Resultado funcion original: '%d' \n", strncmp("abcdef", "abc\357xx",
			5));
	return (0);
}*/
