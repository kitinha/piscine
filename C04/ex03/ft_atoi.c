/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:34:19 by inguille          #+#    #+#             */
/*   Updated: 2025/03/10 19:15:31 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
int main()
{
	char str[] = "-095423";
	char str1[] = "920984";
	char str2[] = "--91828324";
	
	int result = ft_atoi(str);
	int result1 = ft_atoi(str1);
	int result2 = ft_atoi(str2);
	
	printf("%d\n", result);
	printf("%d\n", result1);
	printf("%d\n", result2);
}
