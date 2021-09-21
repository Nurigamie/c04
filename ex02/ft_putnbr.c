/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:23:04 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/14 22:23:04 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	tab[1];

	if (nb < 0)
	{
		nb = -nb;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	nb = nb % 10;
	ft_putchar(nb + 48);
	
	else if (nb == -2147483648)
	{
		ft_putchar("-2147483648");
	}
}


