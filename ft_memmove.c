/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:58:56 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/07 17:25:02 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (src < dest)
	{
		s += n;
		d += n;
		while (n--)
			*d-- = *s--;
	}
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
/*
int	main(int ac, char **av)
{
	char	*res;
	char	str[8] = "foo-bar";

	res = (char *) ft_memmove(str1, str2, 11);
	printf("this is mv : %s\n", res);
}*/
