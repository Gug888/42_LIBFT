/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:27:04 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/17 20:21:27 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*ptr;
	t_list	*str;

	ptr = ft_lstnew("abcdef");
	str = ft_lstnew("sdasdd");
	ft_lstadd_front(&ptr, str);
	printf("text is %s \n", (char *)ptr->next ->content);
	printf("text is %s \n", (char *)ptr -> content);
	printf("text is %zu \n", (sizeof(ptr) + sizeof(str)));
	return (0);
}*/
