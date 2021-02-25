#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t		i;
	unsigned char	*str;

	i = 0;
	str = ptr;
	while (i < n)
	{
		str[n] = (unsigned char)c;
		n--;
	}
	return (str);
}
