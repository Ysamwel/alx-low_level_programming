#include "lists.h"
/**
 * _strlen - returns length of str
 * @s: character
 * Return: 1
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: main link address that leads to a link, link
 * @str: string value
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
