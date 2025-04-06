#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a liked list and all its nodes.
 * @head: pointer to the head.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
