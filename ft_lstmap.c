/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:45:13 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/11 18:06:16 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;
	int	lst_len;

	lst_len = ft_lstsize(lst);
	res = malloc(sizeof(t_list) * lst_len);
		if (!res)
			return (NULL);
	while (lst)
	{
		res->content = f(lst->content);
		res = res->next;
	}
	res->next = NULL;
	ft_lstclear(&lst, del);
	return (res);
}
/*
int	main()
{
	t_list	*one;
	t_list	*two;
	int	i[2] = {1, 2};

	one = ft_lstnew(&i[0]);
	two = ft_lstnew(&i[1]);

	ft_lstadd_front(&one, two);
	while(one)
	{
		printf("this is int : %d\n", *(int *)one->content);	
		one = one->next;
	}
	ft_lstclear(&two, &ft_putzero);
	if (!two && !one)
		printf("well done!\n");
	else
		printf("not good\n");
	return (0);
}*/
