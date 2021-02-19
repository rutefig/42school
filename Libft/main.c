#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s1[20] = "Hello World!";
	char s2[20] = "";
	size_t	size;

	size = ft_strlcpy(s2, s1, 12);

	printf("%ld\n", size);
	printf("%s\n", s2);
	return (0);
}
