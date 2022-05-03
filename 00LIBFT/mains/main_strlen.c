#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


int	main(int argc, char	**argv)
{
	if (argc < 2)
	{
		printf("usage : program arg\n");
		return (1);
	}
	printf("argv[1] == %s\n", argv[1]);

	printf("strlen's return value is : %lu\n", strlen(argv[1]));
	printf("ft_strlen return value is : %lu\n", ft_strlen(argv[1]));
	return(0);
}
