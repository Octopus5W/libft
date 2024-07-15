/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:44:52 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/28 20:11:09 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (!dest || !src)
		return (0);
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char src[] = "lol";
	char src2[] = "lol";
	char dst[] = "mamacita";
	char dst2[] = "mamacita";

	printf("%lu",ft_strlcpy(dst, src, 2));
	printf("%c\n", dst[3]);
	printf("%lu", strlcpy(dst2, src2, 2));
	printf("%c\n", dst2[3]);
}*/
