#include "libft.h"
#include <stdio.h>

void f(unsigned int i, char* str)
{
	i = 0;
	str[i] += 1;
}

int main()
{
	char str[] = "abc";
	printf("%s\n", str);
	ft_striteri(str, f);
	printf("%s\n", str);
}