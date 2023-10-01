/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:57:17 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/01 06:17:40 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*ss;
	size_t		i;
	char		*reserva;
	size_t		lensub;

	//	if ((!len) || (len > ft_strlen(s)))
	//		return (NULL);
	ss = ft_strchr(s, start);
	if (len < (lensub = ft_strlen(ss)))
		return (0);
	reserva = malloc(lensub * sizeof(char));
	if (!reserva)
		return (NULL);
	i = 0;
	while (i < lensub && ss[i] != '\0')
	{
		reserva[i] = *(char *)&ss[i];
		i++;
	}
	return (reserva);
}
/*
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
}*/
