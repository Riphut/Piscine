/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:11:47 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/11 15:50:54 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	re;

	i = 0;
	re = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			re = 0;
		i++;
	}
	return (re);
}
