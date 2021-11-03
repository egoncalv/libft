/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:22:31 by egoncalv          #+#    #+#             */
/*   Updated: 2021/11/03 21:00:08 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <libft.h>

int	ft_wordcntr(char *str, char c)
{
	int	i;
	int	cntr;

	i = 0;
	cntr = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != 0)
			cntr++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (cntr);
}

void	ft_strndup(const char *str, int n)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(char) * n + 1);
	if (!ptr)
		return (0);
	i = 0;
	ptr = ft_strlcpy(ptr, str, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	array = (char **)malloc(sizeof(char) * ft_wordcntr(s, c) + 1);
	if (!array)
		return (0);
	
}

int main ()
{
}
