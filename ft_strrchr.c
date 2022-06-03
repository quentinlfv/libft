/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:03:29 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/18 13:02:53 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	while (string[i])
	{
		if (string[i] == (char)c)
			str = (char *)string + i;
		i++;
	}
	if (string[i] == (char)c)
		str = (char *)string + i;
	return (str);
}
