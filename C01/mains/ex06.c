#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		contador;

	str = "Aitormenta del caribe";
	contador = ft_strlen(str);
	printf("%d", contador);
	return (0);
}
