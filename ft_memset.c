/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:44:48 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/10 12:44:51 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	int	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = c;
		count++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
   char buffer[21];
   char *string;

   ft_memset(buffer, 0, sizeof(buffer));
   string = (char *) ft_memset(buffer,55, 10);
   printf("\nBuffer contents: %s\n", string);
   ft_memset(buffer+10, 100, 10);
   printf("\nBuffer contents: %s\n", buffer);

   memset(buffer, 0, sizeof(buffer));
   string = (char *) memset(buffer,100, 10);
   printf("\nBuffer contents: %s\n", string);
   memset(buffer+10, 55, 10);
   printf("\nBuffer contents: %s\n", buffer);
}*/
