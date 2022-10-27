#include "lists.h"

/**
* listint_len - returns the number of elements in
* a lincked list
@h: head of a list.
*
Return: number of nodes.
*/
size_t listint_len(const lintint_t *h)
{
	size-t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
