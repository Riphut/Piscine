/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:09:57 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/06 17:32:02 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	b = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			if (b != 1)
			{
				write(1, " ", 1);
			}
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			write(1, " ", 1);
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98)
				write(1, ",", 1);
		}
	}
}
//int	main(void)
//{
//	ft_print_comb2();
//	return (0);
//}
