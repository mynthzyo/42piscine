#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 54;
	b = 16;
	ft_ultimate_div_mod(&a, &b);
	printf("Dividendo %d\n", a);
	printf("Resto %d\n", b);
}
