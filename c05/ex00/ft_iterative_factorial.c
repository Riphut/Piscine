/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:53:20 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/16 16:13:10 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		x = nb;
		while (nb > 1)
		{
			x = x * (nb - 1);
			nb--;
		}
		return (x);
	}
}
/*int	main()
{
	printf("%d", ft_iterative_factorial(3));
}*/
