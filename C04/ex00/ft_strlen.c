/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:09:31 by inguille          #+#    #+#             */
/*   Updated: 2025/03/06 14:30:31 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '/0')
		i++;
	return (i);
}

#include <stdio.h>
int	main()
{
	char str[] = "kitinha";
	printf("%d", ft_strlen(str));
}
