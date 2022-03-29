#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	user_A[] = "Aitor";
	char	user_B[] = "Aitor";

	if (ft_strcmp(user_A, user_B) == 0)
	{
		printf("Las cadenas son iguales. \n");
	}
	else
	{
		printf("NO son iguales. \nSu valor es %d\n", ft_strcmp(user_A, user_B));
	}

	if (strcmp(user_A, user_B) == 0)
	{
		printf("Las cadenas son iguales. \n");
	}
	else
	{
		printf("NO son iguales. \nSu valor es %d", strcmp(user_A, user_B));
	}
}
