/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:30:48 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/15 17:06:25 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if ((size == 0) || (ft_strlen(dest) >= size))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
