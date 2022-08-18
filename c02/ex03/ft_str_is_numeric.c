/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:54:24 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/11 15:43:06 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	re;

	i = 0;
	re = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			re = 0;
		i++;
	}
	return (re);
}
