/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:07:11 by inguille          #+#    #+#             */
/*   Updated: 2025/03/16 14:11:54 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
		y++;
	return (y);
}

int	main(int argc, char **argv)
{
	int	y;

	y = 1;
	while (y < argc)
	{
		write(1, argv[y], ft_strlen(argv[y]));
		write(1, "\n", 1);
		y++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
}


