#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, unsigned int n);

int	main(void)
{
	char s1[20] = "Hello World!";
	char s2[20] = "Heyy";

	printf("%d\n", memcmp(s1, s2, 0));
	printf("%d\n", ft_memcmp(s1, s2, 0));
	return (0);
}
