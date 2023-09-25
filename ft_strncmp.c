/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:51:55 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/25 18:50:29 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (i <= n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*#include <string.h>

int	main(void)
{
	size_t	n;

	char s1[] = "h";
	char s2[] = "h";
	n = '\n';
	printf("Resultado mi funcion: '%d' \n", ft_strncmp(s1, s2, n));
	printf("Resultado funcion original: '%d' \n", strncmp(s1, s2, n));
	return (0);
}*/
