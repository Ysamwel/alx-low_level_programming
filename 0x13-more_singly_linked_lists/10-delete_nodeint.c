#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to several addresses
 * @index: position to delete
 * Return: 1 on success, -1 unsuccess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *nav, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	nav = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (nav->next == NULL)
			return (-1);
		nav = nav->next;
	}

	next = nav->next;
	nav->next = next->next;
	free(next);

	return (1);
}
