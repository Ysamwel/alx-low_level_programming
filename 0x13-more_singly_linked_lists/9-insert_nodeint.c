#include "lists.h"
/**
 * insert_nodeint_at_index -  Inserts a new node with a given
 * value at a specified index in a listint_t linked list
 *
 * @head: points to nodes
 * @idx: index
 * @n: integer
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
	if (current == NULL || current->next == NULL)
		return (NULL);

	current = current->next;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
