/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:37:38 by inguille          #+#    #+#             */
/*   Updated: 2025/03/06 19:22:16 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	unsigned int n = 6;
	char s1[] = "hello";
	char s2[] = "hel";
	printf("%d\n", ft_strncmp(s1, s2, n));
	char s3[] = "kiti";
	char s4[] = "kitii";
	printf("%d\n", ft_strncmp(s3, s4, n));
	char s5[] = "kitii";
	char s6[] = "kiti";
	printf("%d\n", ft_strncmp(s5, s6, n));
	char s7[] = "kitinha";
	char s8[] = "kitinha";
	printf("%d\n", ft_strncmp(s7, s8, n));
	char s9[] = "kati";
	char s11[] = "kiti";
	printf("%d\n", ft_strncmp(s9, s11, n));
}
*/