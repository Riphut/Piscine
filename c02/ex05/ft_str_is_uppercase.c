/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:12:21 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/11 19:15:29 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	re;

	i = 0;
	re = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			re = 0;
		i++;
	}
	return (re);
}
