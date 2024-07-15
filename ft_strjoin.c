/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:41:46 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/26 19:34:42 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		lenght;

	if (!s1 || !s2)
		return (0);
	lenght = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	join = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!join)
		return (0);
	join[lenght] = '\0';
	while (*s1)
	{
		*join = *s1;
		join++;
		s1++;
	}
	while (*s2)
	{
		*join = *s2;
		join++;
		s2++;
	}
	return (join - lenght);
}

// #include <stdio.h>

// int	main (void)
// {
// 	char *s1 = "my favorite animal is";
//         char *s2 = " ";
//         char *s3 = "the nyancat";
//         char *res = ft_strjoin(s1, s2);
// 	printf("<%s>", res);
// }
