#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main (int argc, char **argv)
{
	if (argc < 2)
	{
		printf("usage : program arg\n");
		return (1);
	}
	char c = argv[1][0];
	printf("toupper return value is : %c\n", toupper(c));
	printf("ft_toupper return value is : %c\n", ft_toupper(c));
	printf("%c\n", toupper('~'));
	printf("%c\n", ft_toupper('~'));
	return (0);
}
