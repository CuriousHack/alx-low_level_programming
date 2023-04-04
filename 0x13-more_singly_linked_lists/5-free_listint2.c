#include "lists.h"

/**
 * free_listint2 - function tofree a list and
 * set head to NULL
 * @head: location of the pointer
 * Return: 0, Always true
 */

void free_listint2(listint_t **head)
{
	listint_t *mainNode, *newNode;

	if (head == NULL || *head == NULL)
		return;

	mainNode = *head;
	while (mainNode != NULL)
	{
		newnode = mainNode->next;
		free(mainNode);
		mainNode = newNode;
	}
	*head = NULL;
}
