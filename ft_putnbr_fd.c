/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:58:56 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/29 14:28:13 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	if (fd >= 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else if (n < 0)
		{
			write(fd, "-", 1);
			n = n * -1;
			ft_putnbr_fd(n, fd);
		}
		else
		{
			nb = n % 10 + 48;
			if (n > 9)
			{
				ft_putnbr_fd(n / 10, fd);
				write(fd, &nb, 1);
			}
			else
				write(fd, &nb, 1);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(0,1);
	write(1, "\n", 1);
}*/