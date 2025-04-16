/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:34:18 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/10 19:50:04 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = (*f)(i, ptr[i]);
		i++;
	}
	return (ptr);
}
/*
static char	f(unsigned int n, char c)
{
	return (c + 1);
}

int main() {
    char *text = "hello";
    char *result = ft_strmapi(text, f);

    if (result) {
        printf("text  %s\n", text);
        printf("result  %s\n", result);
        free(result);
    } else {
        printf("wrong mistake memeory \n");
    }

    return 0;
}*/
