#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list *curr;
	int i;

	i = 0;
	curr = lst;
	while (curr == NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}