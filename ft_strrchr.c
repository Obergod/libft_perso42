/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafioron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:51:28 by mafioron          #+#    #+#             */
/*   Updated: 2024/11/08 12:24:58 by mafioron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char	*s;
	int	i;

	i = 0;
	while (*src++)
		if (*src == c)
			s = (char *)src;
	if (*s != c)
		return (NULL);
	return (s);
}
/*
int	main(int ac, char **av)
{

	const char *str = "Welcome to Tutorialspoint";
   char ch = '\0';
   char *p = strchr(str, ch);

   if (p != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, p);
	printf("this is my char : %s\n", ft_strrchr(str, ch));
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }

}*/
