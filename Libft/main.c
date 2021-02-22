#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char	c = '\n';

	printf("%d\n%d\n", ft_isalnum(c), isalnum(c));

	return (0);
}
