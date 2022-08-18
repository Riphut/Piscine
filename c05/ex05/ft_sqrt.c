/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:25:11 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/16 21:52:01 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			else if (i > 46341)
				return (0);
			i++;
		}
	}
	return (0);
}
/*int main()
{
	printf("%d", ft_sqrt(13));
}*/
