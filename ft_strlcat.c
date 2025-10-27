/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:39 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:32:09 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	j_src;

	i = 0;
	j = 0;
	j_src = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j_src] != '\0')
	{
		j_src++;
	}
	if (size <= i)
		return (size + j_src);
	while ((i + j) < (size - 1) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + j_src);
}
