#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *		and returns the head node’s data (n).
 * @head: pointer to the first element in the linked list.
 *
 * Return: head node’s data (n), f the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	*head = temp;

	return (num);
}
