/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:59:53 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/03 19:57:12 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	contarPalabras(char const *s, char c);
{
	size_t i;
	size_t cont;
	cont = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c && s[i + i] == c)
		{
			i++;
		}
		cont++;
	}
	return (cont);
}
void	contarlargodepalabra(void);
void	freePorSiFallaMalloc(void);
void	Malloc(void);

char	**ft_split(char const *s, char c)
{
}
