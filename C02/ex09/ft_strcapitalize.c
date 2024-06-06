/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <joseguti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:13:50 by joseguti          #+#    #+#             */
/*   Updated: 2024/06/02 14:22:10 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_letter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_letter(str[i]))
		{
			if (new_word)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				new_word = 0;
			}
			else
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
