#include "lists.h"

/**
 * get_nodeint_at_index - listint_t function
 * @head: listint_t
 * @index: unsigned int
 *
 * Return: return nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
