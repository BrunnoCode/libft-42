/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:54:44 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/04 22:22:30 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	putchr(char c, int fd)
{
	write(fd, &c, 1);
}

static void	nbr(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		putchr('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		nbr(nb / 10, fd);
	putchr(nb % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	nbr(n, fd);
}
