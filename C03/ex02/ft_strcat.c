/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:45:53 by inguille          #+#    #+#             */
/*   Updated: 2025/03/05 18:48:51 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[40] = "hello";
	char src[] = ", how are you?";
	printf("%s\n", ft_strcat(dest , src));
	char dest1[40] = "hello";
	char src2[] = "hello";
	printf("%s\n", ft_strcat(dest1 , src2));
	char dest3[40] = "helloo";
	char src4[] = " hello";
	printf("%s\n", ft_strcat(dest3 , src4));
}
*/