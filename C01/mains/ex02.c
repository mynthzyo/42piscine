#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 14;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}
