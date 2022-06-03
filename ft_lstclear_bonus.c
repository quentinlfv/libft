/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:21:27 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/24 12:36:37 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*t;

	tmp = (*lst);
	while (tmp)
	{
		t = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = t;
	}
	*lst = NULL;
}
