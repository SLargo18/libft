/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:35 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:32:02 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	size_t	i;
	size_t	j;
	char	*strresult;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	i = ls1;
	j = 0;
	strresult = (char *)malloc((ls1 + ls2) + 1);
	if (!strresult)
		return (NULL);
	ft_strcpy(strresult, s1);
	while (j < (ls2))
	{
		strresult[i] = s2[j];
		j++;
		i++;
	}
	strresult[i] = '\0';
	return (strresult);
}