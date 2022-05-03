#include "libft.h"
#include <stdio.h>

int			main()
{

			t_list	*l = ft_lstnew(ft_strdup("nyacat"));
			t_list	*n = ft_lstnew(ft_strdup("OK"));

			printf("new->content is : %s\n", n->content);
			printf("l->content is : %s\n", l->content);
			ft_lstadd_front(&l, n);
			printf("new->content is now : %s\n", n->content);

}