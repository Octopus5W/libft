/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:15:15 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/28 20:50:45 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	count;

	if (!*s2)
		return ((char *)s1);
	else if (len <= 0)
		return (NULL);
	count = 0;
	while (*(char *)s1 && count != len)
	{
		i = 0;
		while (*((char *)s1 + i) == *(s2 + i) \
				&& *(s2 + i) && (i + count) != len)
		{
			i++;
			if (*(s2 + i) == '\0')
				return ((char *)s1);
		}
		count++;
		s1++;
	}
	return (NULL);
}
/*
#include <string.h>

int main ()
{
	const char a[100] = "lorem ipsum dolor sit amet";
	const char b[100] = "sit";
	printf("%s\n", ft_strnstr(a, b, 10));
	printf("%s\n", strnstr(a, b, 10));
}*/
