/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:02:02 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 20:00:25 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlng;
	char	*subst;

	strlng = ft_strlen(s);
	if (start >= strlng)
	{
		return (ft_strdup(""));
	}
	if (len > (strlng - start))
	{
		len = (strlng - start);
	}
	subst = (char *)malloc((len + 1) * sizeof(char));
	if (!subst)
	{
		return (NULL);
	}
	ft_strlcpy(subst, (s + start), (len + 1));
	return (subst);
}
