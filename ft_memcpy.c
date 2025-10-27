/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:57 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 20:01:22 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, World!";
    char dest[50];

    ft_memcpy(dest, src, strlen(src) + 1);
    printf("ft_memcpy: %s\n", dest);

    memcpy(dest, src, strlen(src) + 1);
    printf("memcpy: %s\n", dest);

    return (0);
}*/
