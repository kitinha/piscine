/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:21:33 by inguille          #+#    #+#             */
/*   Updated: 2025/03/11 19:38:14 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result = nb * nb;
		ft_recursive_power(nb,power);
		power--;
	}
	return (result);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(4,5));
}