/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:09:10 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/06 19:38:38 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

void	ft_putint(void)
{
	ft_is_negative(1);
	ft_is_negative(-4);
	ft_is_negative(39);
	ft_is_negative(-125);
}
//int	main(void)
//{
//	ft_putint();
//	return (0);
//}
