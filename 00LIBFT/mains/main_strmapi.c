#include "libft.h"
#include <stdio.h>


char	toupperi(unsigned int index, char c)
{
	//printf("My inner function: index = %d and %c\n", index, c);
	c -=32;
 	return (c);
	
}

int	main()
{
	char *str = "a string to modify";

	printf("%s\n", str);
	printf("%s\n", ft_strmapi(str, toupperi));
	return (0);
}


/*
char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char *str1 = "abc";
	char* str2;
	str2 = ft_strmapi(str1, f);
	printf("%s\n", str2);
}
*/