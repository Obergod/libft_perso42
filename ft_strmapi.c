#include <stdlib.h>

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int	i;

	i = 0;
	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while(s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
