#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: the list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
