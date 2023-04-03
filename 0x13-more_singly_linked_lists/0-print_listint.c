#include "lists.h"

/**
 * print_listint - function toprint all element of a list
 * @h: list to print from
 * Return: number of element in the list
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
