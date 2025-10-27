/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:44 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:27:23 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node_temp;
	t_list	*cont_trans;

	new_list = NULL;
	node_temp = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		cont_trans = f(lst->content);
		node_temp = ft_lstnew(cont_trans);
		if (!node_temp)
		{
			ft_lstclear(&new_list, del);
			del(cont_trans);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node_temp);
		lst = lst->next;
	}
	return (new_list);
}