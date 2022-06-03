/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:35:32 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/24 12:40:00 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	strcmmp(const char *s1, const char *s2, int i)
{
	int	j;

	j = 0;
	while (s2[j] == s1[i] && s2[j] && s1[j])
	{
		i++;
		j++;
	}
	if (s2[j] != 0)
		return (s1[i] - s2[j]);
	return (s1[i -1] - s2[j - 1]);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char			*ptr;
	unsigned int	i;
	int				a;

	ptr = (char *)s1;
	i = 0;
	a = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[0])
		{
			a = strcmmp(s1, s2, i);
			if (ft_strlen(s2) + i > n)
				a = 1;
			if (a == 0)
				return (ptr + i);
		}
		i++;
	}
	return (NULL);
}
