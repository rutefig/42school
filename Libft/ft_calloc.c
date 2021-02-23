void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (nitems == 0 || size == 0)
		return ((void *)0);
	ptr = malloc(nitems * size);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
