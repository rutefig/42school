char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char		*ptr;

	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
