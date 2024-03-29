#include "lists.h"

/**
 * list_len - function to print listlength
 * @h: list to count
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
