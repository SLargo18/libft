/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:00 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/06 18:38:44 by salargo-         ###   ########.fr       */
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

/* #include <stdio.h>
int	main ()
{
	char buffer[10];
	int i = 0;

	while (i < 10)
	{
		buffer[i] = 'a';
		i++;
	}
	printf ("%s\n", buffer);
	ft_bzero (buffer, 8);
	i = 0;
	while (i < 10)
	{
		printf ("%d", buffer[i]);
		i++;
	}
	printf("\n");
	printf("------------>> probando el bzero original \n");
	i = 0;
	while (i < 10)
	{
		buffer[i] = 'a';
		i++;
	}
	printf ("%s\n", buffer);
	bzero (buffer, 8);

	i = 0;
	while (i < 10)
	{
		printf ("%d", buffer[i]);
		i++;
	}
	return 0;
} */
