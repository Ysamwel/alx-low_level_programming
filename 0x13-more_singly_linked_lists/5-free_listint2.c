#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: points to more than one address
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}
