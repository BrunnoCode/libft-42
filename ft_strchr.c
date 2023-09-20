/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:31:35 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/20 19:20:29 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != 0 && *s != c)
	{
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return ((char *)'\0');
}

#include <string.h>
int main()
{
	char	s[] = "kjfs0395jkhb";
	int	c = '8';
	printf("En tu funcion Hemos encontrado: '%s' \n", ft_strchr(s, c));
	printf("Funcion original: '%s' \n", strchr(s, c));
	return (0);
}
