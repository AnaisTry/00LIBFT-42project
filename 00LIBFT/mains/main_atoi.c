#include "libft.h"
#include <stdio.h>
int	main()
{
	printf("atoi: %d\n", atoi(" -5"));
	printf("ft_atoi: %d\n", ft_atoi(" -5"));
	printf("atoi: %d\n", atoi(" ---+--+1234ab567"));
	printf("ft_atoi: %d\n", ft_atoi(" ---+--+1234ab567")); 
	printf("atoi: %d\n", atoi("9223372036854775807"));
	printf("ft_atoi: %d\n", ft_atoi("9223372036854775807")); 	
	return 0;
}