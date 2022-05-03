#include "libft.h"
#include<stdio.h>

int    main(void)
{
    char *str = "hello 42";
    printf("%s\n", ft_substr(str, 7, 1));	
	printf("%s\n", ft_substr(str, 7, 0));	
	printf("%s\n", ft_substr(str, 0, 6));	
	printf("%s\n", ft_substr(str, 2, 20));	
    return (0);
}