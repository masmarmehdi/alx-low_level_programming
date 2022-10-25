#include "lists.h"

/**
 * free_listint2 - void function
 * @head: listint_t
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while (*head)
		{
			temp = *head;
			(*head) = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}
