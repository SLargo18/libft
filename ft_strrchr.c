/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:57 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 20:00:20 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*lt;

	i = 0;
	lt = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			lt = (char *)(s + i);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)(s + i));
	}
	return (lt);
}
