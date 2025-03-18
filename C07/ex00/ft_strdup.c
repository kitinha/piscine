/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 19:28:27 by inguille          #+#    #+#             */
/*   Updated: 2025/03/18 15:54:32 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)	
{
	int j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

char	*ft_strdup(char *src)
{
	int	i;
	char *ptr;

	i = 0;
	ptr = (char *)malloc(str_len(src) * sizeof(char) + 1);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main()
{
	char src[] = "Helloo";
	printf("%s", ft_strdup(src));
}
*/
