#include "libft.h"
#include <stdio.h>

int			main()
{

			t_list	*l = ft_lstnew(ft_strdup("nyacat"));
			t_list	*n = ft_lstnew(ft_strdup("OK"));

			printf("new->content is : %s\n", n->content);
			printf("l->content is : %s\n", l->content);
			ft_lstadd_back(&l, n);
			printf("last l->content is now : %s\n", l->next->content);

}