#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n);

int	main(void)
{
	char dest2[20];
	char src[20] = "Hello World!";
	char *c2;

	c2 = (char *)ft_memmove(dest2, src, 10);
	printf("%p\n", c2);
	printf("%s\n", dest2);
	return (0);
}
