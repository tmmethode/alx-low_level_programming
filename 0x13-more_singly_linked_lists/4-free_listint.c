#include "lists.h"

/**
 * free_listint - function with one argument
 * @head: pointer to node
 *
 * Description: frees a list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freeList;

	while (head)
	{
		freeList = head->next;
		free(head);
		head = freeList;
	}
}
