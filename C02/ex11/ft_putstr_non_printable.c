/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <joseguti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:22:52 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/02 14:49:44 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_hex(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		print_hex(np / 10);
		print_hex(np % 10);
	}
	else
	{
		write(1, &hex[np], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i += 1;
	}
}
