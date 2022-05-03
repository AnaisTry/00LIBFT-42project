#include <stdio.h>
#include <string.h>
int main ()
{
    char dest[] = "Aticleworld";
    const char src[]  = "Amlendra";
    //Source and destination before ft_memmove
    printf("Before ft_memmove >> dest = %s, src = %s\n\n", dest, src);
    ft_memmove(dest, src, 5);
    //Source and destination after ft_memmove
    printf("After ft_memmove >> dest = %s, src = %s\n\n", dest, src);
   

	 char str1[50] = "I am going from Delhi to Gorakhpur";
    char str2[50] = "I am going from Delhi to Gorakhpur";
    //Use of ft_memmove
    printf( "Function:\tmemmove with overlap\n" );
    printf( "Orignal :\t%s\n",str1);
    printf( "Source:\t\t%s\n", str1 + 5 );
    printf( "Destination:\t%s\n", str1 + 11 );
    ft_memmove( str1 + 11, str1 + 5, 29 );
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%d characters\n\n", strlen( str1 ) );
    //Use of memcpy
    printf( "Function:\tmemcpy with overlap\n" );
    printf( "Orignal :\t%s\n",str2);
    printf( "Source:\t\t%s\n", str2 + 5 );
    printf( "Destination:\t%s\n", str2 + 11 );
    memcpy( str2 + 11, str2 + 5, 29 );
    printf( "Result:\t\t%s\n", str2 );
    printf( "Length:\t\t%d characters\n\n", strlen( str2 ) );
    return 0;

}