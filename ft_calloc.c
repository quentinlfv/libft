/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:13:47 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/31 14:41:58 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ar;

	if (size == 0 || nmemb == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ar = malloc(nmemb * size);
	if (!ar)
		return (NULL);
	ft_bzero(ar, nmemb * size);
	return (ar);
}
