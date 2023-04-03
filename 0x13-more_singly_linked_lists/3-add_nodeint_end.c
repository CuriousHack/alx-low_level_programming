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
	listint_t *newNode;

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	lastNode->next = newNode;

	return (lastNode->next);
}
