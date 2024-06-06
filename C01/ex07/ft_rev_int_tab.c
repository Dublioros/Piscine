/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:08:48 by joseguti          #+#    #+#             */
/*   Updated: 2024/05/27 13:08:50 by joseguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	rev;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		rev = tab[a];
		tab[a] = tab[b];
		tab[b] = rev;
		a++;
		b--;
	}
}
