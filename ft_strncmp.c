/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:05 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/16 14:34:38 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t count)
{
	unsigned int	i;

	i = 0;
	if (count == 0)
		return (0);
	while (string1[i] == string2[i] && i < count - 1)
		i++;
	return (((unsigned char)string1[i]) - ((unsigned char)string2[i]));
}
