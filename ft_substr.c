/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:57:17 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/01 04:00:45 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const *ptr;
	size_t	i;


}
int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;
	const char		*res;

	s = "El timur siempre sera el tio";
	start = 's';
	res = ft_strchr(s, start);
	len = ft_strlen(res);
	print("Resultado: %s \n", ft_substr(s, start, len));
	return (0);
}
