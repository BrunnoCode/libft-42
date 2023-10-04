/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:59:53 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/04 15:14:31 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	contarpalabras(char const *s, char c)
{
	size_t	i;
	size_t	cont;
	char	old;

	cont = 0;
	i = 0;
	old = c;
	while (s[i])
	{
		if (old == c && s[i] != c)
		{
			cont++;
		}
		old = s[i];
		i++;
	}
	return (cont);
}

static char	**liberar(char **tab, size_t pos)
{
	size_t	i;

	i = 0;
	while (i < pos)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**resultado;
	size_t	posicion;
	size_t	inicio;

	i = 0;
	posicion = 0;
	inicio = 0;
	resultado = malloc(sizeof(char *) * (contarpalabras(s, c) + 1));
	if (!resultado)
		return (NULL);
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			inicio = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			resultado[posicion++] = ft_substr(s, inicio, i - inicio + 1);
			if (!resultado[posicion - 1])
				return (liberar(resultado, posicion - 1));
		}
		i++;
	}
	resultado[posicion] = NULL;
	return (resultado);
}
/*
 int	main(void)
 {
		char	*s;
		char	c;
		char	**resultado;

		s = "hola meu nome e brunno qual e o seu";
		c = ' ';
		resultado = ft_split(s, c);
		if (resultado)
		{
			for (size_t i = 0; resultado[i] != NULL; i++)
			{
				printf("Palavra %zu: %s\n", i, resultado[i]);
			}
			free(resultado);
		}
		else
		{
			printf("Erro na divisão da string.\n");
		}
		return (0);
 }*/
