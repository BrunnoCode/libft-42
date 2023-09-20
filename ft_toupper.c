/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:49:11 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/20 12:35:00 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdlib.h>

int	main(void)
{
	char    c;
	printf("Inserte un caracter:\n");
	scanf("%s", &c);
	printf("Resultado: '%c'\n", ft_toupper(c));
	return (0);
}*/
