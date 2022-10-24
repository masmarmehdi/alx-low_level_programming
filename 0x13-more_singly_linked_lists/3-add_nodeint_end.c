#include "lists.h"

/**
 * add_nodeint_end - listint_t function
 * @head: listint_t pointer
 * @n: const int
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
