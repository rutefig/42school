#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (s1)
		len1 = ft_strlen(s1);
	else
		len1 = 0;
	if (s2)
		len2 = ft_strlen(s2);
	else
		len2 = 0;
	if (!(str = (char *) malloc((len1 + len2) * sizeof(char) + 1)))
		return (NULL);
	ft_memmove(str, s1, len1);
	ft_memmove(&str[len1], s2, len2 + 1);
	return (str);
}
