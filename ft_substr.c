/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:34:51 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/07 15:25:44 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_length;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start >= s_length)
		return (ft_strdup(""));
	if ((s_length - start < len))
		len = s_length - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}
/*
int main(void)
{
	char *orig;
	char *subs;

	orig = "privet mir!!";
	subs = ft_substr(orig, 7, 9);
	if(subs)
	{
		printf("retured and done %s\n", subs);
		free(subs);
	}
	else
		printf("nullerror");
	return (0);
}*/
