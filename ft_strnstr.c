/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:26:42 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/03 21:35:15 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && (i < len))
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && (haystack[i + j] == needle[j]) && (i + j < len))
			{
				j++;
				if (needle[j] == '\0')
				{
					return ((char *)&haystack[i]);
				}
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1 = "kilimanjaro";
	char	*s2 = "manjaro";
	int		n = 15;
	char *result = ft_strnstr(s1,s2, n);
	if(result)
		printf("the word is `%s \n",result);
	else
		printf("there are nothing %s \n", result);
	return (0);
}*/
