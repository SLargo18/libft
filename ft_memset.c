/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:12 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 20:01:13 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    ft_memset(str1, 'X', 5);
    memset(str2, 'X', 5);
    printf("ft_memset: %s\n", str1);
    printf("memset: %s\n", str2);
    return (0);
}*/