/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:10:16 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/13 20:11:21 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (i < (destsize - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n%s\n", dest, src);
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}
int main()
{
	char	dest[] = "";
	char	src[] = "warley";
	size_t	size = 3;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	return (0);
}
