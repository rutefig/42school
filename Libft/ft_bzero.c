void	ft_bzero(void *s, unsigned int n)
{
	n--;
	while (n > 0)
	{
		((char *)ptr)[n] = '\0';
		n--;
	}
	((char *)ptr)[n] = '\0';
}
