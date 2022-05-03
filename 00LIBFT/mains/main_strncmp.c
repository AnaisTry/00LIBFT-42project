#include "libft.h"
#include<stdio.h>
#include<string.h>
int    main(void)
{
    char *str = "hello 42";
	char str2[] = "";
    printf("%d\n", ft_strncmp(str, str2, 10));	
	printf("%d\n\n", strncmp(str, str2, 10));
	printf("%d\n", ft_strncmp(str, str2, 6));	
	printf("%d\n\n", strncmp(str, str2, 6));
	printf("%d\n", ft_strncmp(str, str2, 0));	
	printf("%d\n\n", strncmp(str, str2, 0));
	printf("%d\n", ft_strncmp(str, str2, -10));	
	printf("%d\n", strncmp(str, str2, -10));
    return (0);
}