/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:31 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:26:28 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*void print_list(t_list *lst)
{
	while (lst)
{
	printf("%s -> ", (char *)lst->data);
	lst = lst->next;
}
	printf("NULL\n");
}

int main(void)
{
	t_list *list = NULL;

	ft_lstadd_back(&list, ft_lstnew("first"));
	print_list(list);
	ft_lstadd_back(&list, ft_lstnew("second"));
	ft_lstadd_back(&list, ft_lstnew("third"));
	print_list(list);
	return (0);
}*/