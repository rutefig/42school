#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (j < size && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i);
}
