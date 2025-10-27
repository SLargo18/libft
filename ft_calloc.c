/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:03 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:37:23 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem;

	total = (nmemb * size);
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	ft_bzero (mem, total);
	return (mem);
}

/*int main()
{
	int i = 0;
	int *array = (int *)ft_calloc(5, sizeof(int));

	if (array == NULL)
		return (1);
	while (i < 5)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
	free(array);
	return 0;
} */