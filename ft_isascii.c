/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:24:49 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/14 13:59:30 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	int	caracter;

	printf("Escriba un caracter:\n ");
	scanf("%x", &caracter);
	if (ft_isascii(caracter))
	{
		printf("El caracter '%c' es un ASCII\n", caracter);
	}
	else
	{
		printf("El caracter '%c' no es un ASCII\n", caracter);
	}
	return (0);
}*/
