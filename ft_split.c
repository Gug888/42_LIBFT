/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:20:06 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/27 19:57:39 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**free_mem(char	**result)
{
	size_t	i;

	i = 0;
	if (!result)
		return (NULL);
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static int	word_count(char const *str, char s)
{
	size_t	count;

	count = 0;
	if (!str || *str == '\0')
		return (0);
	while (*str)
	{
		if (*str == s)
		{
			str++;
		}
		else
		{
			count++;
			while (*str && (*str != s))
				str++;
		}
	}
	return (count);
}

static char	**copy_words(const char *elem, char **arr,
		size_t start, size_t last)
{
	size_t	len;

	len = 0;
	while (arr[len])
		len++;
	arr[len] = ft_substr(elem, start, last);
	if (!arr[len])
	{
		free_mem(arr);
		return (NULL);
	}
	return (arr);
}

static char	**ft_checkwords(char const *s, char c, char **results)
{
	size_t		index;
	size_t		last;
	const char	*tmp;

	index = 0;
	tmp = s;
	while (*s)
	{
		while (*s && *s == c && ++index)
			s++;
		if (!*s)
			return (results);
		last = index;
		while (*s && *s != c)
		{
			last++;
			s++;
		}
		if (!copy_words(tmp, results, index, last - index))
			return (NULL);
		index = last;
	}
	return (results);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**results;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	results = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!results)
		return (NULL);
	results[count] = NULL;
	results = ft_checkwords(s, c, results);
	if (!results)
		return (NULL);
	return (results);
}
/*
int	main(void)
{
	char	*str;
	char	delimeter;
	char	**answ;
	size_t	i;
	size_t	j;

	i = 0;
	delimeter = ',';
	str = "Hi, Im Gurgen, and i learn programming";
	answ = ft_split(str, delimeter);
	while (answ[i])
	{
		printf("count  %zu:  %s\n", i + 1, answ[i]);
		i++;
	}
	j = 0;
	while (answ[j])
	{
		free(answ[j]);
		j++;
	}
	free(answ);
	return (0);
}*/
