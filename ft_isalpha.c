/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:19:58 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/21 22:05:36 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90 || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main ()
{
    unsigned char   a = 'A';
    unsigned char   b = '&';
    printf("is 'A' alpha: %d \n", ft_isalpha(a));
    printf("is '&' alpha: %d \n", ft_isalpha(b));
}
*/
