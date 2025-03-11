/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:03:30 by inguille          #+#    #+#             */
/*   Updated: 2025/03/11 16:18:39 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(nb -1);
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(4));
}
*/