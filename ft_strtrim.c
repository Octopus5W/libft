/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:42:03 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/05/06 21:16:09 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_charinstr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static char	*ft_stralloc(char *src, int start, int end)
{
	char	*dst;
	int		i;

	i = 0;
	if (start <= end)
		dst = (char *)malloc(sizeof(char) * (end - start + 2));
	else
	{
		dst = (char *)malloc(sizeof(char));
		if (!dst)
			return (0);
		dst[0] = '\0';
		return (dst);
	}
	if (!dst)
		return (0);
	while (start <= end)
	{
		dst[i] = src[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	if (!s1 || !set)
		return (ft_stralloc((char *)s1, 1, 0));
	while (ft_charinstr((char *)set, *(char *)s1) && *s1)
	{
		start++;
		s1++;
	}
	end = start;
	while (*s1)
	{
		end++;
		s1++;
	}
	s1--;
	end--;
	while (ft_charinstr((char *)set, *(char *)s1) && end > start)
	{
		end--;
		s1--;
	}
	return (ft_stralloc((char *)s1 - end, start, end));
}
/*
 #include <stdio.h>
 int	main(void)
 {
 	printf("<%s>", ft_strtrim("ccc", ""));
 }*/
