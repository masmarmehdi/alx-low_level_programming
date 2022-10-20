#include "lists.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * print_list - size_t function
 * @h: const list_t pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
