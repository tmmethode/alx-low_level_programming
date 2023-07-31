#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in linked list
 * @head: A pointer to the head of the listint_t list
 *
 * Description: REurn loop
 * Return: If there is no loop - NUL, the address of the node wher
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *element, *value;
	
	if (head == NULL || head->next == NULL)
		return (NULL);
	
	element = head->next;
	value = (head->next)->next;
	
	while (value)
	{
		if (element == value)
		{
			element = head;
			
			while (element != value)
			{
				element = element->next;
				value = value->next;
			}
			return (element);
		}
		element = element->next;
		value = (value->next)->next;
	}
	
	return (NULL);
}
