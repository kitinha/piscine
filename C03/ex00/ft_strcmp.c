/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:55:44 by inguille          #+#    #+#             */
/*   Updated: 2025/03/04 00:01:14 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
	if(s1[i] == s2[i])
		return (0);
}

#include <stdio.h>
int main(void)
{
	char s1[] = "kiti";
	char s2[] = "kitnha";
	printf("%d\n", ft_strcmp(s1, s2));
	char s3[] = "kiti";
	char s4[] = "kiti";
	printf("%d\n", ft_strcmp(s3, s4));
	char s5[] = "kitinha";
	char s6[] = "kita";
	printf("%d\n", ft_strcmp(s5, s6));
}
