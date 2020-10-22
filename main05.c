#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_isin(char c, char *str);
int		ft_wc(char *str, char *charset);
char	*ft_parse_word(char *str, char *sep, int *cpt);
char	**ft_split(char *str, char *charset);

int		test_ft_isin(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Usage : ./prgm05 ft_isin c str\n");
		return (1);
	}
	printf("%d\n", ft_isin(argv[2][0], argv[3]));
	return (0);
}

int		test_ft_wc(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Usage : ./prgm05 ft_wc str charset\n");
		return (1);
	}
	printf("%d\n", ft_wc(argv[2], argv[3]));
	return (0);
}

int		test_ft_parse_word(int argc, char **argv)
{
	int		cpt;

	if (argc != 5)
	{
		printf("Usage : ./prgm05 ft_parse_word str, sep, cpt\n");
		return (1);
	}
	cpt = atoi(argv[4]);
	printf("word : %s | cpt : %d\n", ft_parse_word(argv[2], argv[3], &cpt), cpt);
	return (0);
}

int		test_ft_split(int argc, char **argv)
{
	char	**tab;
	int		cpt;

	cpt = 0;
	if (argc != 4)
	{
		printf("Usage : ./prgm05 ft_split str charset\n");
		return (1);
	}
	tab = ft_split(argv[2], argv[3]);
	printf("[");
	while (tab[cpt])
	{
		printf(" %s ", tab[cpt]);
		if (tab[cpt + 1])
			printf(",");
		cpt++;
	}
	printf("]\n");
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Usage : ./prgm05 func_name arg1 ... argn");
		return (1);
	}
	if (!strcmp(argv[1], "ft_isin"))
		return (test_ft_isin(argc, argv));
	if (!strcmp(argv[1], "ft_wc"))
		return (test_ft_wc(argc, argv));
	if (!strcmp(argv[1], "ft_parse_word"))
		return (test_ft_parse_word(argc, argv));
	if (!strcmp(argv[1], "ft_split"))
		return (test_ft_split(argc, argv));
	return (0);
}
