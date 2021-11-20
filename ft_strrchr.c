/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 02:39:08 by egoncalv          #+#    #+#             */
/*   Updated: 2021/11/08 17:10:22 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = (char)c;
	i = 0;
	while (s[i])
		i++;
	if (s[i] == ch)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
#include <stdio.h>
int main ()
{
    char    str[] = "abceade";
    int     c = 'a';
    printf("%s\n", ft_strrchr(str, c));
}
