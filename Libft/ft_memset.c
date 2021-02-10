void	*ft_memset(void *ptr, int c, unsigned int n)
{
	n--;
	while (n > 0)
	{
		((char *)ptr)[n] = c;
		n--;
	}
	((char *)ptr)[n] = c;
	return (ptr);
}
