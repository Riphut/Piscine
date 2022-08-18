/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:25:51 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/15 16:02:12 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = 0;
	return (dest);
}
