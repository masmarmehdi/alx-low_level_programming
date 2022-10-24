#include "lists.h"

/**
 * add_nodeint - listint_t function
 * @head: listint_t
 * @n: const int
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (NULL);
	}

	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
