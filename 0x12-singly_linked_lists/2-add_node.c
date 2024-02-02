#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a node to the list
 * @head: the head of the list
 * @str: the string to be added as a new node
 * Return: 0 on success, -1 on failure
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
