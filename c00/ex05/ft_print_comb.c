/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:48:50 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/06 17:08:28 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	while (c <= '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7')
		{
			write(1, ", ", 2);
		}
	c++;
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			ft_putchar(i, j, k);
			j++;
		}
		i++;
	}
}
//int	main(void)
//{ 
//	ft_print_comb();
//	return (0);
//}
