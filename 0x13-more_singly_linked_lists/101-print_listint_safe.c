#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function with one argument
 * @head: A pointer to the head node of linked list
 *
 * Description: prints a listint_list safely
 * REturn: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = counter_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for(index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
