#include "lists.h"
/**
 * listint_len - shows length of the nodes
 * @h: head pointer
 * Return: length occupied by nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		h = h->next;
		node_len++;
	}
	return (node_len);
}
