/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:02:25 by egoncalv          #+#    #+#             */
/*   Updated: 2021/12/07 19:11:46 by egoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		tmp = lst->next;
		ft_lstadd_front(*new, f(lst));
		lst = temp;
	}
	if (!*new)
		return 0;
}
