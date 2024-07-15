/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:20:38 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/24 17:18:49 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		s++;
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
 	printf("%p\n", ft_strchr("teste", 'e' + 256));
 	printf("%p\n", strchr("teste", 'e' + 256));
 }*/
