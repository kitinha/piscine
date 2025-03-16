/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:12:50 by inguille          #+#    #+#             */
/*   Updated: 2025/03/16 13:21:23 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char y)
{
	write(1, &y, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		
		if (nb < 0)
		{
			putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
		if (nb < 10)
			putchar (nb + '0');
	}
}
/*
int main()
{
	int nb = 42;
	ft_putnbr(nb);
}
*/
