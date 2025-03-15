/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:59:40 by inguille          #+#    #+#             */
/*   Updated: 2025/03/15 17:47:36 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	main(int argc, char **argv)
{
	int	i;
	int y;

	i = argc - 1;
	while (i >= 1)
	{
		y = 0;
		while (argv[i][y] != '\0')
		{
			write(1, &argv[i][y], 1);
			y++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
