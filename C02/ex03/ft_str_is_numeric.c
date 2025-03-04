/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:46:05 by inguille          #+#    #+#             */
/*   Updated: 2025/03/02 18:49:06 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_str_is_numeric("192490"));
	printf("%d\n", ft_str_is_numeric("192k83k39"));
	printf("%d\n", ft_str_is_numeric("12 43"));
	printf("%d\n", ft_str_is_numeric("12]9[]"));
	printf("%d\n", ft_str_is_numeric(""));
}
*/
