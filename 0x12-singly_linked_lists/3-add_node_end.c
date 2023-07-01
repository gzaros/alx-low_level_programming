#include "lists.h"

/**
 * _strlen - string length
 * @str: string
 *
 * Return: string length
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

/**
 * add_node_end - adds node to end of list
 * @head: linked list
 * @str: data
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = node;
	}

	return (node);
}
