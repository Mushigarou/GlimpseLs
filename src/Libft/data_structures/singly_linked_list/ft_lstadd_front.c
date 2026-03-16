// Adds the node new at the beginning of the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && *lst)
		new->next = *lst;
	*lst = new;
}
