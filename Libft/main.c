#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s1[50] = "Hello World! Have a nice day!";
	const char ch = '?';
	char *ret;

	ret = ft_strchr(s1, ch);
	printf("String after %c is %s\n", ch, ret);
	
	return (0);
}
