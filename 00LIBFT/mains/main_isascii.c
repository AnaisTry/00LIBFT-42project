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

	int c = atoi(argv[1]);

	printf("isascii's return value is : %d\n", isascii(c));
	printf("ft_isascii return value is : %d\n", ft_isascii(c));
	return(0);
}