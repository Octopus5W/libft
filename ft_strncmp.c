/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:03:35 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/23 19:19:44 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*(char *)s1 && *(char *)s2 && \
			*(char *)s1 == *(char *)s2 && n - 1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
		printf("%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
		printf("%d\n", strncmp("abcdefgh", "abcdwxyz", 4));
}*/
