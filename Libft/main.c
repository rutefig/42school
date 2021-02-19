#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s1[20] = "Hello ";
	char s2[20] = "World!";
	size_t	size;

	size = ft_strlcat(s2, s1, 6);

	printf("%ld\n", size);
	printf("%s\n", s2);
	return (0);
}
