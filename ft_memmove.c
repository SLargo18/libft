/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:06 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 20:01:18 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if ((unsigned char *)src > (unsigned char *)dest)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[20] = "Hello World";
    char str2[20] = "Hello World";
    char *buf1 = malloc(12);
    char *buf2 = malloc(12);

    printf("%s\n", str1);
    ft_memmove(str1 + 6, str1, 5);
    printf("%s\n\n", str1);

	char str3[11] = "1234567890";
    printf("%s\n", str3);
    ft_memmove(str3, str3 + 2, 8);
	//memmove(str3, str3 + 2, 8);
    printf("%s\n\n", str3);

    free(buf1);
    free(buf2);

    return 0;
}*/