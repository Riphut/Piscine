/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:33:28 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/06 19:41:30 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	i;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, &"8", 1);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(nb / (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		i = nb % 10 + '0';
		write(1, &i, 1);
	}
}
//int	main(void)
//{
//ft_putnbr(-214);
//return (0);
//}
