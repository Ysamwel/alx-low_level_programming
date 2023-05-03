#include "lists.h"
/**
 * sum_listint - computes the sum of all the integer values in listint_t
 * @head: main pointer to node addresses
 * Return: total sum, 0 if list is empty
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
