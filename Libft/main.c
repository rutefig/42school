#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n);

int	main(void)
{
	char dest1[20];
	char dest2[20];
	char src[20] = "Hello World!";
	void *c1;
	void *c2;

	c1 = (char *)memccpy(dest1, src, 'W', 0);
	c2 = ft_memccpy(dest2, src, 'W', 0);
	printf("%p\n", c1);
	printf("%s\n", dest1);
	printf("%p\n", c2);
	printf("%s\n", dest2);
	return (0);
}
