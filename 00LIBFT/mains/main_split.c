#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int n = 0;
	char	*str = "chabli\tblitruc";
	char	delimiter = 'b';
	char	**sort;

	sort = ft_split(str, delimiter);
	if (!sort)
		printf("NULL\n");
	while (sort[n] != NULL)
	{
		printf("|%s|", sort[n]);
		n++;
	}
	printf("|%s|", sort[n]);
	return (0);
}

