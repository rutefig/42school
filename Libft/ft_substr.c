char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	ptr = (char *)malloc(len * sizeof(char) + 1)
	while (s[start] != '\0' && i < len)
	{
		str[i] = s[start]; 
		start++;
		i++;
	}
	return (str);
}
