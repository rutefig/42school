#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char c = 'C';

	printf("%c\n%c\n", tolower(c), ft_tolower(c));

	return (0);
}
