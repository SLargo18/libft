/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:25 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/29 18:11:06 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intl(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_str(char *str, long nb, int size)
{
	int	i;

	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[size] = '\0';
	i = size - 1;
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	nb;

	nb = n;
	size = intl(nb);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	fill_str(str, nb, size);
	return (str);
}
/* #include <stdio.h>
int main(void)
{
	char *it = ft_itoa(3);
	printf("%s\n", it);
	free (it);
    return (0);
}    */