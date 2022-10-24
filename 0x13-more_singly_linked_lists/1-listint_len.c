#include "lists.h"

/**
 * listint_len - unsigned int function
 * @h: const listint_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}

	return (len);
}
