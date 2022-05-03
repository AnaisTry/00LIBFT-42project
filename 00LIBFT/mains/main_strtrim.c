#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main (int argc, char **argv)
{
	if (argc < 3)
	{
		printf("usage : program <string> <set>\n");
		return (1);
	}
	
	printf("ft_strtrim return value is : %s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}