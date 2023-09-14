/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:40:38 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/14 19:25:30 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	caracter;

	printf("Escriba un caracter: ");
	scanf("%c", &caracter);

	if(ft_isprint(caracter))
	{
		printf("Es printable'%c'\n", caracter);
	}
	else
	{
		printf("No es printable'%c'\n", caracter);
	}
	return (0);
}*/
