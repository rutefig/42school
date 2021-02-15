#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, unsigned int n);

int	main(void)
{
	char src[20] = "Hello World!";
	char *c2;

	c2 = (char *)ft_memchr(src, 'e', 10);
	printf("%p\n", c2);
	return (0);
}
