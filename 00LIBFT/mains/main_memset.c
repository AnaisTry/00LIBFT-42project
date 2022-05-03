#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


//int	main(int argc, char	**argv)
int	main(void)
{
	
	char dest1[8] = "Bonjour"; 
	char dest2[8] = "Bonjour";
	
	printf("memset returns : %s\n", memset(dest1, 'a', 3));
	printf("ft_memset returns : %s\n", ft_memset(dest2, 'a', 3));
	

	/*
	(void) argc;
	
	printf("argv[1] == %s\n", argv[1]);
	printf("argv[2] == %s\n", argv[2]);
	printf("argv[1] == %s\n", argv[3]);
	printf("memset's return value is : %s\n", memset(argv[1], atoi(argv[2]), atoi(argv[3])));
	printf("argv[1] %s", argv[1]);
	//printf("ft_memset return value is : %s\n", ft_memset(argv[1], argv[2], argv[3]));
	*/
	return(0);
}
