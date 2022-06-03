/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlefevre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:17:35 by qlefevre          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:26 by qlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchr(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_fd(-2, fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nbr >= 0 && nbr < 10)
	{
		ft_putchr (nbr + 48, fd);
	}
	else if (nbr < 0)
	{
		ft_putchr('-', fd);
		ft_putnbr_fd(nbr * (-1), fd);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}
