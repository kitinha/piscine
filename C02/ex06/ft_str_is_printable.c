/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:56:13 by inguille          #+#    #+#             */
/*   Updated: 2025/03/03 21:36:46 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d\n", ft_str_is_printable("kItiTa"));
	printf("%d\n", ft_str_is_printable("ki1t]iTa"));
	printf("%d\n", ft_str_is_printable("kit\b"));
	printf("%d\n", ft_str_is_printable("KITA"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable("\r"));
}
*/