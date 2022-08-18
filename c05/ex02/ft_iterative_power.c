/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:37:51 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/16 22:43:23 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while ((power - 1) > 0)
		{
			nb *= a;
			power--;
		}
	}
	return (nb);
}
/*int main()
{
	printf("%d", ft_iterative_power(5,3));
}*/
