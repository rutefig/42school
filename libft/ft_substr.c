#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	st;
	char	*str;

	i = 0;
	st = start;
	str = malloc(len * sizeof(char) + 1);
	while (s[st] != '\0' && i < len)
	{
		str[i] = s[st]; 
		st++;
		i++;
	}
	return (str);
}
