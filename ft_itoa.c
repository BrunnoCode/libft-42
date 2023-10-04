/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:16:52 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/04 17:25:10 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	digitscount(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

static void	filldigits(char *str, long int num, int len)
{
	str[len] = '\0';
	while (num > 0)
	{
		len--;
		str[len] = '0' + (num % 10);
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			i;
	long int	num;

	num = n;
	i = digitscount(num);
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (num == 0)
	{
		ptr[0] = '0';
	}
	else if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
		filldigits(ptr + 1, num, i - 1);
	}
	else
	{
		filldigits(ptr, num, i);
	}
	return (ptr);
}

/*
int	main(void)
{
	printf("Resultado: %s\n", ft_itoa(-4515));
	return (0);
}*/
