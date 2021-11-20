/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 02:49:41 by egoncalv          #+#    #+#             */
/*   Updated: 2021/10/23 02:50:35 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	if (!(ptr == (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (0);
	ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}