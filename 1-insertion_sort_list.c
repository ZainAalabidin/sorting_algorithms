#include "sort.h"
/**
 * insertion_sort_list - function sort a doubly linked list
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *first;

	if (list == NULL || (*list)->next == NULL)
		return;
	first = (*list)->next;
	while (first)
	{
		while ((first->prev) && (first->prev->n > first->n))
		{
			first = swap_node(first, list);
			print_list(*list);
		}
		first = first->next;
	}
}
/**
 *swap_node - swap a node
 *@first: first node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listint_t *swap_node(listint_t *first, listint_t **list)
{
	listint_t *prevn = first->prev, *currn = first;

	prevn->next = currn->next;
	if (currn->next)
		currn->next->prev = prevn;
	currn->next = prevn;
	currn->prev = prevn->prev;
	prevn->prev = currn;
	if (currn->prev)
		currn->prev->next = currn;
	else
		*list = currn;
	return (currn);
}
