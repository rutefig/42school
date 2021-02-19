char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	
	i = 0;
	while (s[i] != '\0')
	{
		if ((int)s[i] == c)
			return (s + i);
		i++;
	}
	if ((char)c == '\0')
		return (s + i);
	return ((void *)0);
}
