/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:37:38 by inguille          #+#    #+#             */
/*   Updated: 2025/03/04 00:01:34 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] < n)
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
	unsigned int n = 4;
	char s1[] = "kitik";
	char s2[] = "kitanhi";
	printf("%d\n", ft_strncmp(s1, s2, n));
}