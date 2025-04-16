/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:36:05 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/14 20:41:24 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(t_list));
	if (!str)
	{
		return (NULL);
	}
	str -> content = content;
	str -> next = NULL;
	return (str);
}
/*
int	main(void)
{
	char	*rdf;
	t_list	*pint;

	rdf = "data";
	pint = ft_lstnew(rdf);
	if(!pint)
		printf("nothing done \n");
	printf("text is %s\n", (char *)pint->content);
	free(pint);
	return (0);

}*/
