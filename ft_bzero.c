/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:49:37 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/09 16:56:23 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (i < (int)n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}