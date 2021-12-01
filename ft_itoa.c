/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:01:58 by egoncalv          #+#    #+#             */
/*   Updated: 2021/12/01 17:20:28 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	ft_set_index(int i, int n)
{
	if (i == 1)
		return (ft_digits_cntr(n));
	else
		return (ft_digits_cntr(n) - 1);
}

char	*ft_strcpy(char *dst, char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * ft_digits_cntr(n));
	if (n == -2147483648)
		return (ft_strcpy(res, "-2147483648"));
	if (n < 0)
	{
		res[0] = '-';
		i = 1;
		n *= -1;
	}
	if (n >= 0 && n < 10)
		res[i] = n + '0';
	i = ft_set_index(i, n);
	res[i] = '\0';
	while (n > 0)
	{
		res[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (res);
}
