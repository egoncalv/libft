/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 02:54:18 by egoncalv          #+#    #+#             */
/*   Updated: 2021/11/20 10:54:51 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*ptr;

	start = 0;
	i = 0;
	while (s1[start] && s1[start] == set[i] && i <= ft_strlen(set))
	{
		start++;
		i++;
	}
	end = ft_strlen(s1);
	while (s1[end] == set[i] && i <= ft_strlen(set))
	{
		end--;
		i--;
	}
	ptr = malloc(sizeof(char) * end - start + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (start <= end)
		ptr[i++] = s1[start++];
	return (ptr);
}
