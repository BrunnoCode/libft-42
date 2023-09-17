/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:57:28 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/17 23:43:35 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	// Declaramos nossas variáveis
	size_t i; // size_t i pois vamos comparar um size de len
	char *d;  // Declaro um ponteiro que irá receber o meu dst
	char *s;  // Faço o mesmo aqui pra receber o src

	d = (char *)d;
		// Fazemos um cast para que nossa variável receba nossos ponteiros *dst *src
	s = (char *)s;
	i = 0;
	if (d > s) // se o destino for maior que origem
	{
		while (0 < len) // exemplo: o total de len é 8,
			que representa uma posicao do array de src
		{
			len--;          
				// Entao em cada loop essa posicao vai diminuindo 8,7,6,5,4,3,2,1
			d[len] = s[len];
				// d vai recebendo o cada valor de s na posicao atual de len
		}
	}
	else // se o destino for menor que origem os dados se sobrepoem normalmente
	{
		while (i < len - 1)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}