/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:57:50 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/05/06 21:12:32 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	count_src;

	if (!dst && size == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	count_src = 0;
	while (dst[i] != '\0')
		i++;
	while (src[count_src] != '\0')
		count_src++;
	if (i > size || size == 0)
		return (count_src + size);
	while (size -1 > j + i && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (count_src + i);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char src[] = "loll";
	char src2[] = "loll";
	char dst[20] = "mamacitam";
	char dst2[20] = "mamacitam";

	printf("%lu\n",ft_strlcat(dst, src, 20));
	printf("%s\n", dst);
	printf("%lu\n", strlcat(dst2, src2, 20));
	printf("%s\n", dst2);
}*/
