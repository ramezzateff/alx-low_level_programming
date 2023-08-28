#include "lists.h"

/**
 * addnodeint.c - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first node in the list
 * @n: data to insert in that new code
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
