/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:33:51 by bbotelho          #+#    #+#             */
/*   Updated: 2023/09/29 12:11:34 by bbotelho         ###   ########.fr       */
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
		signal = -1;

		if(!*str)
			return (0);
		while ((str[i] >= '0' && str[i] <= '9') || (str[i] == '-'))
		{
			if(str[0] == '-')
				num = signal;
			else if ()
		}

}
#include <stdlib.h>
int	main()
{
	const char	*str = "12 34";
	printf("Resultado mi funcion: %d\n", ft_atoi(str));
	printf("funcion original: %d\n", atoi(str));
	return (0);
	
}
