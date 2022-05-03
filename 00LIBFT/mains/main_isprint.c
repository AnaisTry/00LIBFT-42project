#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"


int	main(int argc, char	**argv)
{
	if (argc < 2)
	{
		printf("usage : program arg\n");
		return (1);
	}
	printf("argv[1] == %s\n", argv[1]);

	char c = argv[1][0];

	printf("isprint's return value is : %d\n", isprint(c));
	printf("ft_isprint return value is : %d\n", ft_isprint(c));
	return(0);
}