/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:00:25 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/06 20:41:34 by salargo-         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	int				i;
	char			*a;
	long			num;

	i = intl(n);
	num = n;
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	a[i] = '\0';
	if (num < 0)
	{
		a[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		a[i - 1] = (num % 10 + '0');
		num /= 10;
		i--;
	}
	return (a);
}
/* #include <stdio.h>
int main(void)
{
	char *it = ft_itoa(3);
	printf("%s\n", it);
	free (it);
    return (0);
}    */