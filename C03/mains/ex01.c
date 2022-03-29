#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	user_A[] = "Aitor Vilchez";
	char	user_B[] = "Aitor-Vilchez Acha";

	if (ft_strncmp(user_A, user_B, 6) == 0)
	{
		printf("Las cadenas son iguales. \n");
	}
	else
	{
		printf("NO son iguales. \nSu valor es %d\n", ft_strncmp(user_A, user_B, 6));
	}

	if (strncmp(user_A, user_B, 6) == 0)
	{
		printf("Las cadenas son iguales. \n");
	}
	else
	{
		printf("NO son iguales. \nSu valor es %d", strncmp(user_A, user_B, 6));
	}
}
