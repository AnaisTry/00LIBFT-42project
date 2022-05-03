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
	printf("tolower return value is : %c\n", tolower(c));
	printf("ft_tolower return value is : %c\n", ft_tolower(c));
	return (0);
}
