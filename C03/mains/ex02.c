#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char	user_A[100] = "AiTor vilchez Quintana";
	char	user_B[100] = "Aitor Vilchez Acha";
    char	user_C[100] = "AiTor vilchez Quintana";
	char	user_D[100] = "Aitor Vilchez Acha";

	printf("ORIGINAL %s\n", user_B);
    printf("DESTINO %s\n", user_A);

    ft_strcat(user_A, user_B);
    printf("CONCATENADO %s\n", user_A);

    strcat(user_C, user_D);
	printf("STRCAT %s", user_C);
}
