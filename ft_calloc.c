/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:03 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:38:43 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem;

	total = (nmemb * size);
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	ft_bzero (mem, total);
	return (mem);
}
