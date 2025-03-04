/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:51:32 by inguille          #+#    #+#             */
/*   Updated: 2025/03/02 18:54:54 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("ktia"));
	printf("%d\n", ft_str_is_uppercase("ki1t]iTa"));
	printf("%d\n", ft_str_is_uppercase("ki ta"));
	printf("%d\n", ft_str_is_uppercase("KITA"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/