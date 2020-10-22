#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(int argc, char **argv)
{
	int min;
	int max;
	int *range = NULL;
	int cpt;
	int size;

	if (argc != 3)
	{
		printf("Usage ./prgm02 min max");
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Error\n");
		return (1);
	}
	if (size == 0)
	{
		printf("Tableau vide\n");
		return (1);
	}
	cpt = 0;
	while (cpt < size)
	{
		printf("%d", range[cpt]);
		if (cpt < size -1)
			printf(" ");
		cpt++;
	}
	printf("\n");
	return (0);
}
