#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s1[50] = "Hello World! Have a nice day!";
	char s2[20] = "Have";
	char *ptr;

	ptr = ft_strnstr(s1, s2, 30);
	printf("String after %s is %s\n", s2, ptr);
	
	return (0);
}
