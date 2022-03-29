#include <unistd.h> 

int ft_strstr(char	*str, char	*to_find)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 0;
	while (to_find[n])
		n++;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j])
			{
				j++;
			}
			if (j == n)
				return (i + j);
		}
		j = 0;
		i++;
	}
	return (n);
}

void	ft_strcpy(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
}

void	print_number(char *dict, char *input)
{
	int	n;

	n = ft_strstr(&dict[n], input);
	n = n + 2;
	while (dict[n] != '\n')
	{
		write(1, &dict[n], 1);
		n++;
	}
}

int	ft_testini(int argc, char *argv[])
{
	int	i;

	if (argc > 3 || argc == 1)
	{
		write(2, "Error Parametros\n", 16);
		return (1);
	}
	if (argv[2] == NULL)
		argv[2] = "numbers.dict";
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (((argv[1][i] - 48) < 0 || (argv[1][i] - 48) > 9))
		{
			if (argv[1][i] != 32)
			{
				write(2, "Error Entrada\n", 13);
				return (1);
			}
		}
		i++;
	}
	return (0);
}
