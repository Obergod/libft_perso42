/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:10:30 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/11 15:18:00 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*stock;

	stock = malloc(sizeof(t_list));
	if (!stock)
		return (NULL);
	stock->content = content;
	stock->next = NULL;
	return (stock);
}
/*
int	main()
{
	printf("%s\n",(char *) ft_lstnew("teeeessst")->content);
}*/
