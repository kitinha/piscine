/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:22:34 by inguille          #+#    #+#             */
/*   Updated: 2025/02/26 18:55:16 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 1;
	int b = 2;
	printf("Before the Swap a is %d and b is %d\n", a, b);
	ft_swap(&a, &b);
	printf("After the Swap a is %d and b is %d\n", a, b);
}
*/