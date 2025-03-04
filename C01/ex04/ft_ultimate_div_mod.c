/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:49:41 by inguille          #+#    #+#             */
/*   Updated: 2025/02/27 18:22:10 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rem;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
}
/*
#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("The result of the division is %d", a);
	printf(" and the remainder is %d\n", b);
}
*/