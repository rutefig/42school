#include "libft.h"

static int	ft_isspace(char c)
{
	return ((c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v' || c == ' '));
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	is_neg;
	int	res;

	res = 0;
	i = 0;
	is_neg = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		is_neg = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]) && nptr[i] != '\0')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}	
	return (res * is_neg);
}
