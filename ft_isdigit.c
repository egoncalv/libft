/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:30:07 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/21 22:04:57 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main ()
{
    unsigned char   a = '4';
    unsigned char   b = 'a';

    printf("is_digit (4): %d\n", ft_isdigit(a));
    printf("is_digit (a): %d\n", ft_isdigit(b));
}
*/
