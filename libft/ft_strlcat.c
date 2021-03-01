#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	dlen = i;
	while (src[i - dlen] != '\0' && i + 1 < size)
	{
		dst[i] = src[i - dlen];
		i++;
	}
	if (dlen < size)
		dst[i] = '\0';
	return (dlen + ft_strlen(src));
}
