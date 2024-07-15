/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:44:40 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/10 13:51:47 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char dst[] = "awiw";
	char dst2[] = "awiw";
	char *src = "mdr";
	int s[3] = {2590, 66, 110};
	int	d[3] = {56, 56, 56};
	int s2[3] = {2590, 66, 110};
	int	d2[3] = {56, 56, 56};

	printf("%s\n", memcpy(dst2+1, src, 3));
	printf("%s\n", ft_memcpy(dst+1, src, 3));
	printf("%s\n", dst);
	printf("%s\n", dst2);
	printf("%s\n", memcpy(d2, s2, 4));
	printf("%s\n", ft_memcpy(d, s, 4));
	printf("%d %d %d\n", d2[0], d2[1], d2[2]);
	printf("%d %d %d\n", d[0], d[1], d[2]);
}*/
