#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list asceding order
 * @list: pointer to pointer of the first node
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp;

	if (*list == NULL || (*list)->next == NULL)
		return;
	curr = (*list)->next;
	while (curr != NULL)
	{
		tmp = curr;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			if (tmp->prev == NULL)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			tmp->next->prev = tmp;
			print_list(*list);
		}
		curr = curr->next;
	}
}
