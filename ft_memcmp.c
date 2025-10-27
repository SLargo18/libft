/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:53 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:59:31 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*pr1;
	unsigned char	*pr2;

	pr1 = (unsigned char *)s1;
	pr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (pr1[i] != pr2[i])
		{
			return (pr1[i] - pr2[i]);
		}
		i++;
	}
	return (0);
}
