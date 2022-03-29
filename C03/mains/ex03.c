#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	user_A[100] = "AiTor vilchez Quintana";
	char	user_B[100] = "Aitor Vilchez Acha";
    char	user_C[100] = "AiTor vilchez Quintana";
	char	user_D[100] = "Aitor Vilchez Acha";

	printf("ORIGINAL %s\n", user_B);
    printf("DESTINO %s\n", user_A);

    ft_strncat(user_A, user_B, 7);
    printf("CONCATENADO %s\n", user_A);

    strncat(user_C, user_D, 7);
	printf("STRCAT %s", user_A);
}