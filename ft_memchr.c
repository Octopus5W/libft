/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:37:22 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/10 20:38:19 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(char *)s == (char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_memchr("salut", 126, 2));
	printf("%s\n", memchr("salut", 126, 2));
}*/
