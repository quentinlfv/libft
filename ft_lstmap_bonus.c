/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:28:06 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/24 17:10:22 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*li;
	t_list	*tmp;

	li = ft_lstnew(f(lst->content));
	if (!li)
	{
		ft_lstclear(&li, del);
		return (0);
	}
	tmp = li;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&tmp, ft_lstnew(f(lst->content)));
		if (!tmp->next)
		{
			ft_lstclear(&li, del);
			return (0);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (li);
}
