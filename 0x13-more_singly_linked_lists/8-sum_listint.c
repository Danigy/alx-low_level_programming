#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the date nth of a listint_t list.
 * @head: A pointer to the end of the listint_t list.
 * Return: If the list is empty - 0; Otherwise, the sum of all data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
