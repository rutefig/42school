void	*memcpy(void *dest, const void *src, unsigned int n)
{
	n--;
	while (n > 0)
	{
		((char *)dest)[n] = ((char *)src)[n];
		n--;
	}
	((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}
