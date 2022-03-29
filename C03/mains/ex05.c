#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	user_A[100] = "Acha";
	char	user_B[100] = "Aitor";

	char	user_C[100] = "Acha";
	char	user_D[100] = "Aitor";

	printf("ORIGINAL %s\n", user_B);
	printf("DESTINO %s\n", user_A);

	printf("CONCATENADO %u\n", ft_strlcat(user_A, user_B, 7));
	printf("DESTINO FINAL %s\n", user_A);
	printf("ORIGEN FINAL %s\n", user_B);

	printf("STRLCAT %lu\n", strlcat(user_C, user_D, 7));
	printf("DESTINO FINAL %s\n", user_C);
	printf("ORIGEN FINAL %s\n", user_D);
} 
