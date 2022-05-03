#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	 char	*a = "to need to look for a needle in a haystack";
	 char	*b = "needle";

	printf("1: %s\n", ft_strnstr(a, b, 6));
	printf("1: %s\n", strnstr(a, b, 6));
	printf("2: %s\n", ft_strnstr("", "", 1));
	printf("2: %s\n", strnstr("", "", 1));
	printf("3: %s\n", ft_strnstr("a", "", 1));
	printf("3: %s\n", strnstr("a", "", 1));
	printf("4: %s\n", ft_strnstr("", "a", 1));
	printf("4: %s\n", strnstr("", "a", 1));
	printf("5: %s\n", ft_strnstr("abc", "a", 1));
	printf("5: %s\n", strnstr("abc", "a", 1));
	printf("6: %s\n", ft_strnstr("abc", "c", 1));
	printf("6: %s\n", strnstr("abc", "c", 1));
<<<<<<< HEAD:00LIBFT/libft/main_strnstr.c
	printf("7: %s\n", ft_strnstr("abc", "abc", 5));
	printf("7: %s\n", strnstr("abc", "abc", 5));
	printf("8: %s\n", ft_strnstr("abc", "abce", 4));
	printf("8: %s\n", strnstr("abc", "abce", 4));
	printf("9: %s\n", ft_strnstr("AbcAbcdAbcde", "Abcd", 10));
	printf("9: %s\n", strnstr("AbcAbcdAbcde", "Abcd", 10));
=======
	printf("%s\n", ft_strnstr("abc", "abc", 5));
	printf("7 :%s\n", strnstr("abc", "abc", 5));
	printf("%s\n", ft_strnstr("abc", "abce", 4));
	printf("8 :%s\n", strnstr("abc", "abce", 4));
	printf("9 : %s\n", ft_strnstr("AbcAbcdAbcde", "Abcd", 4));
	printf("9 :%s\n", strnstr("AbcAbcdAbcde", "Abcd", 4));
>>>>>>> ad387b71431cb1ed63a427c6151f346b395f2008:00LIBFT/mains/main_strnstr.c
	return (0);
}
