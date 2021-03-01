#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!src)
		return (0);
	if (!dst || !size)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
