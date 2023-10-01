/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:12:26 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/30 21:55:51 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t type)
{
	void	*pt;

	pt = malloc(len * type);
	if (!pt)
		return (NULL);
	ft_bzero(pt, len * type);
	return (pt);
}
/*
int	main(void)
{
	//int	arr = {1, 4, 4, 5, 8, 9};
	size_t	ec = 6;
	size_t	size = sizeof(int);

	printf("Resultado de mi funcion %p\n %s\n:", ft_calloc(ec, size),
		ft_calloc(ec, size));
	printf("Resultado funcion Original %p\n %s\n:", calloc(ec, size), calloc(ec,
			size));
	return (0);
}*/
