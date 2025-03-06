/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:43:49 by inguille          #+#    #+#             */
/*   Updated: 2025/03/05 21:04:15 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
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
int	main(void)
{
	unsigned int nb = 5;
	char dest[40] = "hello";
	char src[] = ", how are you?";
	printf("%s\n", ft_strncat(dest , src, nb));
	char dest1[40] = "hello";
	char src2[] = "hello";
	printf("%s\n", ft_strncat(dest1 , src2, nb));
	char dest3[40] = "helloo";
	char src4[] = " hello";
	printf("%s\n", ft_strncat(dest3 , src4, nb));
}
*/