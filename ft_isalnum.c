/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:31:35 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/25 14:55:37 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main ()
{
    unsigned char   a = '*';
    unsigned char   b = '2';

    printf("Is '*' alnum: %d \n", ft_isalnum(a));
    printf("Is '2' alnum: %d \n", ft_isalnum(b));
}
*/
