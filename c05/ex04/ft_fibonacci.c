/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkandiyi <rkandiyi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:24:42 by rkandiyi          #+#    #+#             */
/*   Updated: 2022/08/16 22:44:26 by rkandiyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	fib_math(int n, int a, int b)
{
	if (n == 0)
		return (a);
	else
		return (fib_math(n - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else
		return (fib_math(index, 0, 1));
}
/*int main()
{
	printf("%d", ft_fibonacci(5));
}*/
