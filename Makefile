all : prgm00 prgm01 prgm02 prgm03 prgm04 prgm05

prgm00 : ../ex00/*.c main00.c
	gcc -g -Wall -Wextra -Werror ../ex00/*.c main00.c -o prgm00

prgm01 : ../ex01/ft_range.c main01.c
	gcc -g -Wall -Wextra -Werror ../ex01/ft_range.c main01.c -o prgm01

prgm02 : ../ex02/ft_ultimate_range.c main02.c
	gcc -g -Wall -Wextra -Werror ../ex02/ft_ultimate_range.c main02.c -o prgm02

prgm03 : ../ex03/ft_strjoin.c main03.c
	gcc -g -Wall -Wextra -Werror ../ex03/ft_strjoin.c main03.c -o prgm03

prgm04 : ../ex04/*.c main04.c
	gcc -g -Wall -Wextra -Werror ../ex04/*.c main04.c -o prgm04

prgm05 : ../ex05/ft_split.c main05.c
	gcc -g -Wall -Wextra -Werror ../ex05/ft_split.c main05.c -o prgm05
