#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	str_len;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		str_len = ft_strlen(&s[start]);
	else
		str_len = len;
	str = malloc(str_len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], str_len + 1);
	return (str);
}
