#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	int min;
	int max;
	int *range = NULL;
	int cpt;

	cpt = 0;
	if (argc != 3)
	{
		printf("Usage : ./prgm01 min max");
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	range = ft_range(min, max);
	if (range == 0)
		printf("Tableau vide");
	else
	{
		while (cpt < max - min)
			printf("%d ", range[cpt++]);
		printf("\n");
	}
}
