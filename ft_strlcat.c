/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:50:14 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/11 11:50:55 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	j;
	unsigned int	i;
	size_t			srclen;
	size_t			dstlen;

	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	j = 0;
	if (size < 1)
		return (srclen + size);
	while (src[j] != 0 && i < size -1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	if (size < dstlen)
		return (srclen + size);
	else
		return (dstlen + srclen);
}
