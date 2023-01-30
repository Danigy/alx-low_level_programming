#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer;
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
