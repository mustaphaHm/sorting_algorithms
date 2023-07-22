#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list asceding order
 * @list: pointer to pointer of the first node
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *next, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (curr = (*list)->next; curr != NULL; curr = next)
	{
		next = curr->next;
		while (curr->prev != NULL && curr->n < curr->prev->n)
		{
			tmp = curr->prev;
			curr->prev = tmp->prev;
			tmp->next = curr->next;
			if (tmp->prev != NULL)
				tmp->prev->next = curr;
			else
				*list = curr;
			if (curr->next != NULL)
				curr->next->prev = tmp;
			tmp->prev = curr;
			curr->next = tmp;
			print_list(*list);
		}
	}
}
