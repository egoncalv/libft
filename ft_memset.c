/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 01:04:29 by egoncalv          #+#    #+#             */
/*   Updated: 2021/11/20 11:48:05 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	*ptr;

	ptr = b;
	while (--len > 0)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
