#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	i;
	int	tab[6];

	tab[0] = 1;
	tab[1] = 4;
	tab[2] = 0;
	tab[3] = 7;
	tab[4] = 7;
	tab[5] = 8;
	size = 6;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}