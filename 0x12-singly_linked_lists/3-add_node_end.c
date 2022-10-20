#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - list_t function
 * @head: list_t
 * @str: const str
 *
 * Return: address of new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *temp;
	size_t count = 0, i;

	last_node = malloc(sizeof(list_t));

	if (last_node == NULL)
	{
		return (NULL);
	}
	last_node->str = strdup(str);

	while (str[count])
	{
		count++;
	}

	last_node->len = count;
	last_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = last_node;
	}
	else
	{
		for (i = 0; temp->next != NULL; i++)
		{
			temp = temp->next;
		}
		temp->next = last_node;
	}
	return (*head);

}
