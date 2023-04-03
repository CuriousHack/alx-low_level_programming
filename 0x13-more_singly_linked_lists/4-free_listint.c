#include "lists.h"

/**
 * free_listint - function to free listint_t
 * @head: head of the list
 * Return: Always true
 */

void free_listint(listint_t *head)
{
	listint_t *mainNode;

	while (head != NULL)
	{
		mainNode = head;
		head = head->next;
		free(mainNode);
	}
}
