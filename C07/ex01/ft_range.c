/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:58:54 by inguille          #+#    #+#             */
/*   Updated: 2025/03/18 18:26:50 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int	i;
	int	temp;

	i = 0;
	temp = min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min)* sizeof(int));
	while (temp < max)
	{
		arr[i] = temp;
		i++;
		temp++;
	}
	
	return (arr);
}
/*
int	main(void)
{
	int min = 7, max = 10;
	int *arr = ft_range(min, max);
	
	int i = 0;
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
*/
