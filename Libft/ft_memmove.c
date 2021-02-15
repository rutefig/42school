void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char	tmp[n];
	unsigned int i;

	i = 0;
	while (i <= n)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i <= n)
	{
		((char *)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
