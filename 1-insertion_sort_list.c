#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list asceding order
 * @list: pointer to pointer of the first node
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp, *next;

	if (!list || *list == NULL || (*list)->next == NULL)
		return;
	next = (*list)->next;
	while (next != NULL)
	{
		curr = next;
		for (tmp = curr->prev; tmp != NULL; tmp = tmp->prev)
		{
			if (tmp->n > curr->n)
			{
				curr->prev->next = curr->next;
				if (curr->next != NULL)
					curr->next->prev = curr->prev;
				curr->next = tmp;
				if (tmp->prev != NULL)
				{
					tmp->prev->next = curr;
					curr->prev = tmp->prev;
				}
				else
				{
					*list = curr;
					curr->prev = NULL;
				}
				tmp->prev = curr;
				print_list(*list);
				tmp = curr;
			}
		}
		next = next->next;
	}
}
