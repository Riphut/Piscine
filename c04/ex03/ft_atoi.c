/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:10:40 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/16 14:15:57 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	num;

	i = 0;
	count = 0;
	num = 0;
	while (str[i] != '\0' && !((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')))
	{
		if (str[i] == '-')
		count++;
		else if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + (str[i] - '0');
		i++;
	}
	if ((count % 2) == 1)
		num = num * -1;
	return (num);
}
