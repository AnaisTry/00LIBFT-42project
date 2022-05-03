#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main (int argc, char **argv)
{
	if (argc < 2)
	{
		printf("usage : program arg\n");
		return (1);
	}
	const char *s = "une phrase de test!";
	char c = argv[1][0];
	printf("strrchr return value is : %s\n", strrchr(s,c));
	printf("ft_strrchr return value is : %s\n", ft_strrchr(s,c));
	return (0);
}