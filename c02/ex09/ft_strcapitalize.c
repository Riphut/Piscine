/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:17:12 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/22 18:33:57 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*make_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	make_lowercase(str);
	a = 0;
	if (str[a] > 96 && str[a] < 123)
	str[a] -= 32;
	while (str[a] != '\0')
	{
		if (! (str[a] > 96 && str[a] < 123)
			&& ! (str[a] > 64 && str[a] < 91)
			&& ! (str[a] > 47 && str[a] < 58)
			&& (str[a + 1] > 96 && str[a + 1] < 123))
			str[a + 1] -= 32;
		a++;
	}
	return (str);
}
