#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int	c_found;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
		{
			c_found = 1;
			break;
		}
		i++;
	}
	if (c_found)
		return ((void *)(s + i));
	return ((void *)0);
}
