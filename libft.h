/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:10:00 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/06 20:37:29 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include "libft.h"

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
char	*ft_itoa(int n);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif