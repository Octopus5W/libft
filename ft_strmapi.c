/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:59:41 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/05/06 21:22:52 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*pointer;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	str = ft_strdup(s);
	if (!str)
		return (0);
	pointer = str;
	while (*s)
		*str++ = f(i++, *s++);
	return (pointer);
}
