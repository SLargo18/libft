/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:20:23 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:41:52 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
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
}


void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list **current = lst;
	if(!lst || !new)
		return;
	while((*current))
	{
		current=&(*current)->next;
	}
	*current = new;
}*/
