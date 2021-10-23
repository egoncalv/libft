/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 02:40:01 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/23 02:40:33 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && n > 0 && s1[i] && s2[i])
	{
		i++;
		n--;
	}
	return ((int)(s1[i] - s2[i]));
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    char    s1[] = "Bst";
    char    s2[] = "`Bst";

    printf("%d\n", ft_strncmp(s1, s2, 3));
    printf("%d\n", strncmp(s1, s2, 3));

}
*/
