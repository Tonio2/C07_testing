#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_lenbase(char *base);
int		ft_indexof(char c, char *str);
int		ft_atoi_base(char *str, char *base, int len_base);
char	*ft_createstr_base(int nb, char *base, int len_base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	test_ft_lenbase(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage : ./prgm04 ft_lenbase base\n");
		return (1);
	}
	printf("%d\n", ft_lenbase(argv[2]));
	return (0);
}

int	test_ft_indexof(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Usage : ./prgm04 ft_indeof c str\n");
		return (1);
	}
	printf("%d\n", ft_indexof(argv[2][0], argv[3]));
	return (0);
}


int	test_ft_atoi_base(int argc, char **argv)
{
	if (argc != 5)
	{
		printf("Usage : ./prgm04 ft_atoi_base str base len_base\n");
		return (1);
	}
	printf("%d\n", ft_atoi_base(argv[2], argv[3], atoi(argv[4])));
	return (0);
}

int	test_ft_createstr_base(int argc, char **argv)
{
	if (argc != 5)
	{
		printf("Usage : ./prgm04 ft_createstr_base nb base len_base\n");
		return (1);
	}
	printf("%s\n", ft_createstr_base(atoi(argv[2]), argv[3], atoi(argv[4])));
	return (0);
}

int	test_ft_convert_base(int argc, char **argv)
{
	if (argc != 5)
	{
		printf("Usage : ./prgm04 ft_convert_base nbr base_from base_len\n");
		return (1);
	}
	printf("%s\n", ft_convert_base(argv[2], argv[3], argv[4]));
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage : ./prgm04 func_name arg1 ... argn\n");
		return (1);
	}
	if (!strcmp(argv[1], "ft_lenbase"))
		return (test_ft_lenbase(argc, argv));
	if (!strcmp(argv[1], "ft_indexof"))
		return (test_ft_indexof(argc, argv));
	if (!strcmp(argv[1], "ft_atoi_base"))
		return (test_ft_atoi_base(argc, argv));
	if (!strcmp(argv[1], "ft_createstr_base"))
		return(test_ft_createstr_base(argc, argv));
	if (!strcmp(argv[1], "ft_convert_base"))
		return(test_ft_convert_base(argc, argv));
	return (0);
}
