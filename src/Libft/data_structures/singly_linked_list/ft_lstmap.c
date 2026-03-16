/* Iterates the list 'lst' and applies the function
f on the content of each node. Creates a new
list resulting of the successive applications of
the function f. The del function is used to
delete the content of a node if needed. 
Returns : A new list, NULL if Alloc fails */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	**temp;
	char	*s;

	if (!lst || !del || !f)
		return (NULL);
	s = f(lst->content);
	head = ft_lstnew(s);
	if (!head)
		return (free(s), NULL);
	temp = &head;
	while (lst->next)
	{
		lst = lst->next;
		temp = &(*temp)->next;
		s = f(lst->content);
		*temp = ft_lstnew(s);
		if (!*temp)
			return (ft_lstclear(&head, del), free(s), NULL);
	}
	return (head);
}
