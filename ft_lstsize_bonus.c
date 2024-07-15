/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:07:17 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/04/26 19:35:05 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	if (lst == NULL)
		return (0);
	count = 1;
	while (lst->content && lst->next)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
