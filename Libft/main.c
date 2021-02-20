#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char s1[50] = "Hello World! Have a nice day!";
	char s2[20] = "Have";

	printf("My function: %d\n", ft_strncmp(s1, s2, 30));
	printf("Default function: %d\n", strncmp(s1, s2, 30));
	
	return (0);
}
