/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:49:16 by inguille          #+#    #+#             */
/*   Updated: 2025/03/05 20:55:52 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			j++;
		}
		i++;
	}
	to_find[j] = '\0';
	return (to_find);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Hello, welcome to 42 youll have fun too";
	char to_find[] = "to";
	printf("%s\n", ft_strstr(str, to_find));
	char str1[] = "Hello, welcome to 42 I'm Kita";
	char to_find2[] = "Kita";
	printf("%s\n", ft_strstr(str1, to_find2));
	char str3[] = "Hello, welcome to 42";
	char to_find4[] = "kita";
	printf("%s", ft_strstr(str3, to_find4));
}
*/