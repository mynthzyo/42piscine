#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *des, char *src);

int	main(void)
{
	char	dest[] = "vilchez";
	char	src[] = "aitor";

	ft_strcpy(dest, src);
	printf("%s\n", dest);

	char	dest2[] = "vilchez";
	char	src2[] = "aitor";

	strcpy(dest2, src2);
	printf("%s", dest2);
} 
