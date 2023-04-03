#include "lists.h"

/**
 * add_nodeint_end - function to add a new node at the
 * end of listint_t list
 * @head: pointer to the head
 * @n: value of item to be added
 * Return: NULL if failed, return pointer tothe new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode = *head;

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = malloc(sizeof(listint_t));
	if (lastNode->next == NULL)
		return (NULL);

	lastNode->next->n = n;
	lastNode->next->next = NULL;

	return (*head);
}
