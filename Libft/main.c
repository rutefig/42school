#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char str[10] = "-134";

	printf("My ATOI: %d\n", ft_atoi(str));
	printf("Result: %d\n", atoi(str));
	
	return (0);
}
