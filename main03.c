#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(int argc, char **argv)
{
	char	*result;

	if (argc < 3)
	{
		printf("Usage : ./prgm03 sep str1 str2 ... strn");
		return (1);
	}
	result = ft_strjoin(argc - 2, argv + 2, argv[1]);
	printf("%s\n", result);
	free(result);
	return (0);
}

