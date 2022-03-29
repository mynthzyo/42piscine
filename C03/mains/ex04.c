#include <stdio.h>
#include <string.h>

char	*ft_strstr(char	*str, char	*to_find);

int	main(void)
{
	char	user_A[100] = "Aitor12346 Vilchez1234567";
	char	user_B[100] = "12345";

	printf("BUSCAR %s\n", user_B);
	printf("EN %s\n", user_A);

	printf("RESULTADO %s\n", ft_strstr(user_A, user_B));

	printf("STRSTR %s", strstr(user_A, user_B));
} 
