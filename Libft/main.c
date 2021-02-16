#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s1[20] = "Hello World!";

	printf("%ld\n", ft_strlen(s1));
	printf("%ld\n", strlen(s1));
	return (0);
}
