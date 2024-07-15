/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:35:17 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/23 19:26:11 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	while (*s && ((*s >= 9 && *s <= 13) || *s == 32))
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		nb = nb * 10 + *s - 48;
		s++;
	}
	return (nb * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	printf("%d", ft_atoi("   -05"));
	printf("%d", atoi("   -05"));
}*/
