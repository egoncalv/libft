/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:01:58 by egoncalv          #+#    #+#             */
/*   Updated: 2021/11/20 01:01:39 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_digits_cntr(int n)
{
	int	cntr;

	cntr = 0;
	while (n != 0)
	{
		n /= 10;
		cntr++;
	}
	return (cntr);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * ft_digits_cntr(n));
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		res[0] = '-';
		i = 1;
		n *= -1;
	}
	if (n >= 0 && n < 10)
		res[i] = n + '0';
	if (i == 1)
		i = ft_digits_cntr(n);
	else
		i = ft_digits_cntr(n) - 1;
	while (n > 0)
	{
		res[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (res);
}
/*
int	main(void)
{
	int	n;

	n = -2147483648;
	printf("%s\n", ft_itoa(n));
	return (0);
}
*/
