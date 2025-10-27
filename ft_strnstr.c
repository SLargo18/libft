/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:55 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:35:45 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (i + j < len && big[i + j] != '\0' && little[j] != '\0'
				&& big[i + j] == little[j])
			{
				j++;
			}
			if (little[j] == '\0')
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}
