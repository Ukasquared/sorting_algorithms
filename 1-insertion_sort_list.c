#include "sort.h"

/**
* insertion_sort_list - sorts doubly linked list of
* integers in ascending order using insertion sort algorithm
*
* @list: linlked list of nodes
*
* Return: nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *curr_ptr, *ptr;

	ptr = NULL;

	if (*list == NULL)
	       return;	

	curr_ptr = (*list)->next;

	while (curr_ptr != NULL)
	{
		/* reassign or updatepointer to initial state */
		ptr = curr_ptr;
		while (ptr->prev && ptr->n < ptr->prev->n)
		{	/* link nodes */
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			ptr->prev->next = ptr->next;
			ptr->next = ptr->prev;
			ptr->prev = ptr->prev->prev;
			if (ptr->prev != NULL)
				ptr->prev->next = ptr;
			else
				*list = ptr;
			ptr->next->prev = ptr;
			print_list(*list);
		}
		curr_ptr = curr_ptr->next;
	}
}
