/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:38:39 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/17 16:44:02 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	if (argc == 1)
		return (0);
	else
	{
		while (i > 0)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
			argc--;
		}
	}
}
