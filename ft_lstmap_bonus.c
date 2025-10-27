/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:44 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:44:29 by salargo-         ###   ########.fr       */
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

/*#include <stdio.h>

void	*duplicate_content(void *content)
{
	char	*str = (char *)content;
	return (ft_strdup(str));
}

void	delete_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*new_lst;
	t_list	*tmp;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Hello")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("World")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("42")));

	new_lst = ft_lstmap(lst, duplicate_content, delete_content);

	printf("Original list:\n");
	tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	printf("\nMapped list:\n");
	tmp = new_lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, delete_content);
	ft_lstclear(&new_lst, delete_content);

	return (0);
}*/