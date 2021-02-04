#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	diff;

	diff = max - min;
	ptr = (int *) malloc(diff * sizeof(int));

	if (diff <= 0)
		ptr = NULL;
	i = 0;
	while (i < diff)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
