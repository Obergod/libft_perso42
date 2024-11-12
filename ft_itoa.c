/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:27:16 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/12 19:14:02 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	a_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (ft_abs(n) / 10 > 0)
		count++;
	return (count);
}

char	*ft_itoa(int nb)
{
	char	*res;
	int		len;
	int		i;
	long	n;

	n = nb;
	len = a_len(n);
	i = len - 1;
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[i--] = nb % 10;
		nb /= 10;
	}
	res[len] = '\0';
	return (res);
}
