#include "lists.h"

/**
 * sum_listint - int function
 * @head: listint_T
 *
 * Return: sum of data or 0.
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0, i;

	if (head == NULL)
	{
		return (0);
	}
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
