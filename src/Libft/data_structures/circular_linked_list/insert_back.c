// #include "philosophers.h"

// int	insert_back(t_philo **head, t_philo *new_node)
// {
// 	if (!new_node)
// 		return (-1);
// 	if (!(*head))
// 		*head = new_node;
// 	else
// 	{
// 		if (!(*head)->next)
// 		{	
// 			(*head)->prev = new_node;
// 			(*head)->next = new_node;
// 			new_node->prev = (*head);
// 		}
// 		else
// 		{	
// 			(*head)->prev->next = new_node;
// 			new_node->prev = (*head)->prev;
// 			(*head)->prev = new_node;
// 		}
// 		new_node->next = (*head);
// 	}
// 	return (0);
// }
