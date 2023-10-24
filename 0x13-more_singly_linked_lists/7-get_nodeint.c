#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of linked list
 * @head: The first node of linked list
 * @index: position of node to return
 * return: poiner to the node being looked for or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *temp = head;

	while (temp && c < index)
	{
		temp = temp->next;
		c++;
	}

	return (temp ? temp : NULL);
}
