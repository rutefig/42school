void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned int	i;
	int	c_found;

	c_found = 0;
	i = 0;
	while (i < n && ((char *)src)[i] != '\0')
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		if (((char *)src)[i] == (char)c)
		{
			c_found = 1;
			((char *)dest)[i] = ((char *)src)[i];
			break;
		}
	}
	if (c_found)
		return (dest + i);
	return ((void *)0);
}
