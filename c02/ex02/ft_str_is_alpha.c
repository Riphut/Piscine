/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:00 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/11 15:50:13 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	re;

	i = 0;
	re = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 123)
			re = 0;
		i++;
	}
	return (re);
}
