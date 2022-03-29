#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[] = "Vilchez";
	char	src[] = "Titortill";
	char	dest2[] = "Vilchez";
	char	src2[] = "Titortill";
	unsigned int	length;
	unsigned int	length2;

	printf("%s\n", src);
	printf("%s\n", dest);
	length = ft_strlcpy(dest, src, 8);
	printf("%d\n", length);
	write(1, dest, 50);
    printf("\n\nSTRLCPY ORIGINAL\n");
    length2 = strlcpy(dest2, src2, 8);
	printf("%d\n", length2);
	write(1, dest2, 50);
	return (0);
}
