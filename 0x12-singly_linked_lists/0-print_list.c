#include "lists.h"

/**
 * print_list - function toprint all values of a list
 * @h: the list to be printed from
 * Return: all values in the list
 */

size_t print_list(const list_t *h)
{
	list_t *current = h;

	while (current != NULL)
	{
		printf("%s\n", current->str);
		current = current->next;
	}
}
