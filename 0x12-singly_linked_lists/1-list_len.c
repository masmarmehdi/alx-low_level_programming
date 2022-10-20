#include "lists.h"

/**
 * list_len - size_t function
 * @h: const list_t pointer
 *
 * Return: number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
