/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:49:16 by inguille          #+#    #+#             */
/*   Updated: 2025/03/06 17:38:07 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (&to_find[j]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "Hello, welcome to 42 youll have fun too";
	char to_find[] = "to";
	printf("%s\n", ft_strstr(str, to_find));
	char str1[] = "Hello, welcome to 42 I'm Kita";
	char to_find2[] = "Kita";
	printf("%s\n", ft_strstr(str1, to_find2));
	char str3[] = "Hello, welcome to 42";
	char to_find4[] = "";
	printf("%s\n", ft_strstr(str3, to_find4));
	
	char str5[] = "Hello, welcome to 42 youll have fun too";
	char to_find6[] = "to";
	printf("\n%s\n", strstr(str5, to_find6));
	char str7[] = "Hello, welcome to 42 I'm Kita";
	char to_find8[] = "Kita";
	printf("%s\n", strstr(str7, to_find8));
	char str9[] = "Hello, welcome to 42";
	char to_find410[] = "";
	printf("%s", strstr(str9, to_find410));
}
*/