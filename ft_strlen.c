/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:35:40 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/21 22:06:22 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

size_t
	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
/*
#include <stdio.h>
int main ()
{
    char    str[] = "a";
    printf("size of str: %zu", ft_strlen(str));
}
*/
