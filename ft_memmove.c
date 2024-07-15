/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:40:26 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/29 10:40:12 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src > dst)
		ft_memcpy(dst, src, len);
	else if (src < dst)
	{
		while (len-- > 0)
			*(char *)(dst + len) = *(char *)(src + len);
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
	//int s[3] = {2590, 66, 110};
	//int	d[3] = {56, 56, 56};
	//int s2[3] = {2590, 66, 110};
	//int	d2[3] = {56, 56, 56};

	printf("%s\n", memmove(dst2, src, 3));
	printf("%s\n", ft_memmove(dst, src, 3));
	printf("%s\n", dst);
	printf("%s\n", dst2);
	//printf("%s\n", memmove(d2, s2, 4));
	//printf("%s\n", ft_memmove(d, s, 4));
	//printf("%d %d %d\n", d2[0], d2[1], d2[2]);
	//printf("%d %d %d\n", d[0], d[1], d[2]);
}*/
