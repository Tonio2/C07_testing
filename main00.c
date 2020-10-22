#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	char *cpy;
	char *ft_cpy;

	if (argc != 2)
	{
		printf("Usage : ./prgm00 str");
		return (1);
	}
	cpy = strdup(argv[1]);
	ft_cpy = ft_strdup(argv[1]);
	printf("Je veux obtenir %s et j\'obtiens %s", cpy, ft_cpy);
}
