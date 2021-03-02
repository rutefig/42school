#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	n;

	str = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!str || !set)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
				j++;
			else
				break;
		}
		if (j >= ft_strlen(set))
		{
			str[n] = s1[i];
			n++;
		}
		i++;
	}
	str[n] = '\0';
	return (str);
}
