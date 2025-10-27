/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:51 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:59:29 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pr;

	i = 0;
	pr = (unsigned char *)s;
	while (i < n)
	{
		if (pr[i] == (unsigned char)c)
		{
			return (pr + i);
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main()
{
	char *test = "Hello world!";
	char *str = ft_memchr(test, 'o', 12);
	printf("%s\n", str);
}*/