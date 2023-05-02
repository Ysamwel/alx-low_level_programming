#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t
 * @head: points to more than one address
 * @n: constant integer
 * Return: address of new element, unsuccessful NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_ptr;
	listint_t *current = *head;

	new_ptr = malloc(sizeof(listint_t));
	if (new_ptr != NULL)
	{
		new_ptr->n = n;
		new_ptr->next = NULL;
	}
	else
		return (NULL);
	if (current != NULL)
	{
		while (current->next = NULL)
			current = current->next;
		current->next = new_ptr;
	}
	else
		*head = new_ptr;
	return (new_ptr);

}
