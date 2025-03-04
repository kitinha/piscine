/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:44:43 by inguille          #+#    #+#             */
/*   Updated: 2025/03/02 18:49:47 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || \
		(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d\n", ft_str_is_alpha("kItiTa"));
	printf("%d\n", ft_str_is_alpha("ki1t]iTa"));
	printf("%d\n", ft_str_is_alpha("ki ta"));
	printf("%d\n", ft_str_is_alpha("KITA"));
	printf("%d\n", ft_str_is_alpha(""));
}
*/