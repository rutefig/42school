#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	tmp[n];
	unsigned char	*ptr_tmp;
	
	ptr_tmp = &tmp[0];
	ptr_tmp = ft_memcpy(ptr_tmp, src, n);
	dest = ft_memcpy(dest, ptr_tmp, n);
	return (dest);
}
