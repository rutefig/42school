#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int c, unsigned int n);

int	main(void)
{
	char str[50];
	char str2[50];

	ft_memset(str, 'w', 3);
	printf("%s\n", str);
	memset(str2, 'w', 3);
	printf("%s\n", str2);
	return (0);
}
