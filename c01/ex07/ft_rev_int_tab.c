/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:30:14 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/08 21:14:37 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size / 2)
	{
		y = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = y;
		x++;
	}
}
