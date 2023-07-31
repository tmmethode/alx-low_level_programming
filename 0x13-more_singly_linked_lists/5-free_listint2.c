#include "lists.h"

/**
 * free_listint2 - function with one argument
 * @head: pointer to head pointer of list
 *
 * Description: frees a list
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *freeList;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		freeList = (*head)->next;
		free(*head);
		*head = freeList;
	}
	*head = NULL;
}
