int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
		p++;
	return (p - str);
}