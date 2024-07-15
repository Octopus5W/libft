/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:18:20 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/05/06 20:56:29 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*temp;
	void	*set;

	if (!f || !del)
		return (NULL);
	cpy = NULL;
	while (lst)
	{
		set = f(lst->content);
		temp = ft_lstnew(set);
		if (!temp)
		{
			del(set);
			ft_lstclear(&cpy, (*del));
			return (cpy);
		}
		ft_lstadd_back(&cpy, temp);
		lst = lst->next;
	}
	return (cpy);
}
