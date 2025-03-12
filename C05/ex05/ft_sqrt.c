/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:35:02 by inguille          #+#    #+#             */
/*   Updated: 2025/03/12 17:13:16 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(14));
}
*/