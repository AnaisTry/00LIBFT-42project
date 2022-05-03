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
	printf("strchr return value is : %s\n", strchr(s,c));
	printf("ft_strchr return value is : %s\n", ft_strchr(s,c));
	return (0);
}
