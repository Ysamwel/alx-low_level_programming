#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: points to more than one address
 * @n: constant integer
 * Return: address of new node,unsuccess Null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ptr;

	new_ptr = malloc(sizeof(listint_t));
	if (new_ptr != NULL)
	{
		new_ptr->n = n;
		new_ptr->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_ptr->next = *head;
	*head = new_ptr;
	return (new_ptr);
}
