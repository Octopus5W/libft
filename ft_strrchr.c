/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:49:43 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/24 17:40:44 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	lenght;

	lenght = 0;
	while (*s)
	{
		lenght++;
		s++;
	}
	while (lenght > 0 && *s != (char)c)
	{
		lenght--;
		s--;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	printf("<%p>\n", ft_strrchr("xteste", 'x'));
 	printf("<%p>\n", strrchr("xteste", 'x'));
}*/
