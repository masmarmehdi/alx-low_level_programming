#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - list_t function
 * @head: list_t
 * @str: str
 *
 * Return: address of new element or null.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	while (str[count])
	{
		count++;
	}

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
