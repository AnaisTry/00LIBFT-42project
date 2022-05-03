#include <stdio.h>
#include "libft.h"
int main()
{
	char src[3] = "gun";
	int size_dest = 6;
    char dest[4] = "top";
	printf("copied '%s', dest is %zu characters long\n", dest, ft_strlcat(dest, src, size_dest));
	return (0);
}