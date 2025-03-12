/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:13:35 by inguille          #+#    #+#             */
/*   Updated: 2025/03/12 19:17:09 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			count++;
		}
		i++;
	}
	if (count == 2)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(7));
}
*/