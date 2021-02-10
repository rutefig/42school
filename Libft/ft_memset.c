void	*ft_memset(void *ptr, int c, int n)
{
	n--;
	((char *)ptr)[n+1] = '\0';
	while (n >= 0)
	{
		((char *)ptr)[n] = c;
		n--;
	}
	return (ptr);
}
