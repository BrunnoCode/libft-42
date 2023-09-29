/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:33:51 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/29 13:19:57 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	num;

	i = 0;
	num = 0;
	signal = 1;
	if (!*str)
		return (0);
	while (!(str[i] >= '48' && str[i] <= '57') || (str[i] == '-'))
		i++;
	while ((str[i] >= '48' && str[i] <= '57') || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			signal = -1;
			i++;
		}
		if (str[i] >= 48 && str[i] <= 57)
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
	}
	return ((int)signal * num);
	return (0);
}
#include <stdlib.h>

int	main(void)
{
	const char	*str;

	str = "	435";
	printf("Resultado mi funcion: %d\n", ft_atoi(str));
	// printf("funcion original: %d\n", atoi(str));
	return (0);
}
