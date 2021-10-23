/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 02:54:18 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/23 02:56:39 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		j;

	if (set == 0)
		return (ft_strdup(s1));
	if (!(trimmed == (char *)malloc(sizeof(char)
				* ft_strlen(s1) - (ft_strlen(set) * 2) + 1)))
		return (0);
	return (trimmed);
}
