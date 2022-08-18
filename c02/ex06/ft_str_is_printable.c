/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:00:01 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/11 16:12:37 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	re;

	i = 0;
	re = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
			re = 0;
		i++;
	}
	return (re);
}
