/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:49:26 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/12 16:54:08 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*stock;

	if (c == 0)
	{
		stock = (char *)s + ft_strlen(s);
		return (stock);
	}
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			stock = (char *)s;
			return (stock);
		}
		s++;
	}
	return (NULL);
}

