#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of the list
 * @head: poiter to a pointer to head of list
 * @n: int value to put in new node
 * Return: pointer to the new added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
