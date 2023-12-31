#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head:double pointer to the list_t list.
 * @str: new string to put in the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = add;
	return (add);
}
