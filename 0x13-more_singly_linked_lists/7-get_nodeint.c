#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of a listint_t linked list
 * @head: A pointer to the end of th listint_t lists
 * @index: The index of the node to locates - indices start at 0
 *
 * Return: If the nodes does not exit - NULL; Othrwise, the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
