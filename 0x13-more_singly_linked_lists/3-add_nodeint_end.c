#include "lists.h"

/**
 * add_noteine_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *end_node = malloc(sizeof(listint_t));

	if (!end_node)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = end_node;
	}
	return (end_node);
}
