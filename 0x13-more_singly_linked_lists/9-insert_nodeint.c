#include "lists.h"

/**
 * insert_nodeint_at_index - listint_t function
 * @head: listint_t
 * @idx: unsigned int
 * @n: int
 *
 * Return: address of new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t  *new_node, *previous_node, *next_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	for (i = 0; idx < i && *head != NULL; i++)
	{
		if (i == idx)
		{
			previous_node = (*head);
			next_node = (*head)->next;
			previous_node->next = new_node;
			new_node->next = next_node;
			break;
		}
		(*head) = (*head)->next;
	}
	if (idx > i)
	{
		return (NULL);
	}
	return (new_node);
}
