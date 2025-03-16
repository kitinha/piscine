/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inguille <inguille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:04:14 by inguille          #+#    #+#             */
/*   Updated: 2025/03/16 13:57:12 by inguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (str[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write (1, argv[0], ft_putstr(argv[0]));	
		write (1, "\n", 1);
	}
}
