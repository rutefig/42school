#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	n--;
	while (n > 0)
	{
		((char *)ptr)[n] = '\0';
		n--;
	}
	((char *)ptr)[n] = '\0';
}
