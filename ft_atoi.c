/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:33:51 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/29 21:59:55 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ignore(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t')
		|| (str[i] == '\f') || (str[i] == '\v') || (str[i] == '\r'))
		i++;
	return (i);
}

static int	isnegative(const char *str, int i)
{
	int	signal;

	signal = 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
			signal = -1;
	return (signal);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	num;

	i = ignore(str);
	num = 0;
	signal = isnegative(str, i);
	if (!*str)
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (str[i] >= 48 && str[i] <= 57)
			num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)signal * num);
}
/*
#include <stdlib.h>

int	main(void)
{
	const char	*str;

	str = "-43-5";
	printf("Resultado mi funcion: %d\n", ft_atoi(str));
	printf("funcion original: %d\n", atoi(str));
	return (0);
}*/
