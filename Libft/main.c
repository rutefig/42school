#include <stdio.h>

void	*ft_memset(void *ptr, int c, unsigned int n);

int	main(void)
{
	char str[50];

	ft_memset(str, '*', 10);
	printf("%s\n", str);
	return (0);
}
