
#include "libft.h"
#include <string.h>
#include<stdio.h>
int    main(void)
{
    char *src = "exact";
	char *src1 = "shrt";
	char *src2 = "a very long sentence";
	int size_dest = 21;
    char dest[21];

	printf("copied '%s', src is %d characters long\n", dest, strlcpy(dest, src, size_dest));
    printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src, size_dest));
	printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src1, size_dest));
	printf("copied '%s', src is %d characters long\n", dest, ft_strlcpy(dest, src2, size_dest));
    return (0);
}