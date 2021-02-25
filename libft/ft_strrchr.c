char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if ((int)s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	if ((char)c == s[i])
		return ((char *)s);
	return ((void *)0);
}
