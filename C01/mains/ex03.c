#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 80;
	b = 30;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
}
