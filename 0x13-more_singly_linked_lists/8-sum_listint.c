#include "lists.h"

/**
 * sum_listint - function with one argument
 * @head: pointer to first node of linked list
 *
 * Description: returns the summ of all node datas in a linked list
 * Return: sum or 0 if empty
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
