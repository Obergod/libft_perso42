/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:06:55 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/08 17:25:37 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*s;
	char	*stock;

	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	stock = s;
	str = str + start;
	if (!s)
		return (NULL);
	while (len--)
		*s++ = *str++;
	*s++ = '\0';
	return (stock);
}
/*
int	main(int ac, char **av)
{
	printf("this is substr : %s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
}*/
