#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = size;
	dst[n] = '\0';
	while (n > 0)
	{
		n--;
		dst[n] = src[n];
	}
	return (size);
}
