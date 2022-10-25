#include "lists.h"

/**
 * delete_nodeint_at_index - int function
 * @head: listint_t
 * @index: unsigned int
 *
 * Return: either 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node, *next_node;
	size_t i;

	previous_node = *head;
	if (index != 0)
	{
		for (i = 0; i < index -1 && previous_node != NULL; i++)
		{
			previous_node = previous_node->next;
		}
	}
	if (previous_node == NULL || (previous_node->next == NULL && index != 0))
	{
		return (-1);
	}
	next_node = previous_node->next;
	if (index == 0)
	{
		free(previous_node);
		*head = next_node;
	}
	else
	{
		previous_node->next = next_node->next;
		free(next_node);
	}
	return (1);
}
