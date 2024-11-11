/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:50:32 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/08 11:50:38 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dst;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * len + 1);
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}
