/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:50:33 by inguille          #+#    #+#             */
/*   Updated: 2025/03/02 18:52:44 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d\n", ft_str_is_lowercase("kItiTa"));
	printf("%d\n", ft_str_is_lowercase("ki1t]iTa"));
	printf("%d\n", ft_str_is_lowercase("ki ta"));
	printf("%d\n", ft_str_is_lowercase("kita"));
	printf("%d\n", ft_str_is_lowercase(""));
}
*/