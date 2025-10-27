/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:00 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:42:19 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";
    ft_bzero(str1, 5);
    bzero(str2, 5);
    printf("ft_bzero: %s\n", str1);
    printf("bzero: %s\n", str2);
    return (0);
}*/

/*unsigned char *p = (unsigned char *)s; best way to do it
while (n--)
    *p++ = 0;*/