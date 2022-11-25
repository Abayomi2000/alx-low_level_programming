#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: head of the linked list
 * @str: string in the struct
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int newelem = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	while (str[newelem])
	{
		newelem++;
	}

	newnode->len = newelem;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

