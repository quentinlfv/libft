/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:27:46 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/31 15:00:56 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*is_neg(int i, unsigned int n)
{
	char		*nbr;

	nbr = malloc(sizeof(char) * (i + 2));
	if (!nbr)
		return (NULL);
	nbr[i + 1] = 0;
	nbr[0] = '-';
	while (i != 1)
	{
		nbr[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	nbr[i] = n + 48;
	return (nbr);
}

char	*is_pos(int i, int n)
{
	char		*nbr;

	nbr = malloc(sizeof(char) * (i + 2));
	if (!nbr)
		return (NULL);
	nbr[i + 1] = 0;
	while (i != 0)
	{
		nbr[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	nbr[i] = n + 48;
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nb;

	nb = n;
	i = 0;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		i++;
	}
	if (n < 0)
	{
		n = n * (-1);
		return (is_neg(i + 1, (unsigned int)n));
	}
	return (is_pos(i, (unsigned int)n));
}
