/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:01:24 by salargo-          #+#    #+#             */
/*   Updated: 2025/10/27 19:30:58 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **s, int i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
}

static int	count_word(const char *s, char c)
{
	int	i;
	int i_wrd;
	int flag;

	i = 0;
	flag = 0;
	i_wrd = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && !flag)
		{
			i_wrd++;
			flag = 1;
		}
		else if (s[i] == c && flag)
			flag = 0;
		i++;
	}
	return (i_wrd);
}

static char	*count_str(const char **s, char lim)
{
	char		*newstr;
	const char	*start;
	size_t		i;

	while (**s == lim)
		(*s)++;
	if (**s == '\0')
		return (NULL);
	start = *s;
	i = 0;
	while (**s && **s != lim)
	{
		i++;
		(*s)++;
	}
	newstr = malloc(i + 1);
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, start, i + 1);
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i_wrds;
	int		i;

	if (!s)
		return (NULL);
	i_wrds = ft_countsubstr(s, c);
	words = malloc((i_wrds + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (i < i_wrds)
	{
		words[i] = next_substrs(&s, c);
		if (!words[i])
		{
			free_split(words, i);
			return (NULL);
		}
		i++;
	}
	words[i] = NULL;
	return (words);
}
/*
#include <stdio.h>

int main()
{
	char	s[] = "^^^1^^2a,^^^^3^^^^--h^^^^";
	char	d;
	char	**result;

	d = '^';
	result = ft_split(s, d);
	if (result)
	{
		for (int i = 0; result[i]; i++)
			printf("%s\n", result[i]);  // Imprimir cada subcadena
	}
	return (0);
}
*/