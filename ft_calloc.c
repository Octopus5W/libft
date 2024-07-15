/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:42:24 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/24 17:05:05 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	buff;

	buff = count * size;
	if (buff != 0 && (buff / size) != count)
		return (0);
	str = malloc(buff);
	if (!str)
		return (0);
	ft_bzero(str, buff);
	return (str);
}
/*
#include <stdio.h>

int main ()
{
	void	*test;
	int i = 0;

	test = ft_calloc(5, sizeof(int));
	while (i < 5)
	{
		test[i]
		i++;
	}

}*/
