/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 23:31:34 by inguille          #+#    #+#             */
/*   Updated: 2025/03/11 00:06:17 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int result;
    int factorial;
    result = 1;
    factorial = 1;
    if (nb < 0 || nb >= 12)
        return (0);
    if(nb == 0 || nb == 1)
        return (1);
    while (factorial <= nb)
    {
        result *= factorial;
        factorial++;
    }
    return (result);
}

#include <stdio.h>

int main()
{
    printf("%d", ft_iterative_factorial(11));
}