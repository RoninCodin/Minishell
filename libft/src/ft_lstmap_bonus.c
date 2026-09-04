#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;

	if (!lst)
		return (NULL);
	head = f(lst);
	if (!head)
		return (NULL);
	lst = lst->next;
	curr = head;
	while (lst)
	{
		curr->next = f(lst);
		if (!(curr->next))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (head);
}
