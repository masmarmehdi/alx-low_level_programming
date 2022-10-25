#include "lists.h"

/**
 * pop_listint - int function
 * @head: listint_t
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	first_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = first_node;
	return (n);
}
