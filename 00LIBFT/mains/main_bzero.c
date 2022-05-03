#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"


int	main(void)
{


	
	char	*s4 = "Jambonfromagequiroulemal";
// buffers
	char	b0[100];
	char	b1[100];

	memset(b0, 0, 100);
	memset(b1, 0, 100);
	printf (" OK !\nft_bzero :");
	strlcpy(b0, s4, 30);
	strlcpy(b1, s4, 30);
	bzero(b0, 1);
	ft_bzero(b1, 1);
	if (memcmp(b0, b1, 2))
	{
		printf (" KO\nParams : s4, 1\n");
		return (1);
	}

	/*
	char s1[8] = "Bonjour"; 
	//char s2[8] = "Bonjour";

	bzero(s1, 3);
	
	for(unsigned long i = 0; i < strlen(s1); i++)
	{
		printf("bzero returns : %c\n", s1[i]);	
	}
	printf("\n");

	//printf("ft_bzero returns : %s\n", ft_bzero(dest2, 3));
	return(0);
	*/
} 