/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 01:31:42 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/23 02:32:59 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
bzero writes n zeroes bytes to the string s. If n is zero, it does nothing
*/

#include <libft.h>

void	ft_bzero(void *s, int n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
}
/*
#include <stdio.h>
int main()
{
    char    str[] = "ABCDE";
    printf("Before: %s", str);
    ft_bzero(str + 3, 3);
    printf("After: %s", str);
}
*/
