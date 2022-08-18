/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:16:09 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/15 20:42:06 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
