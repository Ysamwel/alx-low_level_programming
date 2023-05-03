#include "lists.h"
/*
 * sum_listint - function that returns the sum of
 *              all the data (n) of a listint_t linked list
 *
 * @head: main pointer
 * Return: total sum 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;


	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
