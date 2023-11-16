#include"lists.h"
/**
 * add_node - addes new node at the start
 * @head: head of node
 * @str: string for node
 * Return: new node
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *n_h = malloc(sizeof(list_t));

	if (!head || !n_h)
	return (NULL);

	if (str)
	{
		n_h->str = strdup(str);
		if (!n_h->str)
		{
			free(n_h);
			return (NULL);
		}
		n_h->len = _strlen(n_h->str);
	}
	n_h->next = *head;
	*head = n_h;
	return (n_h);
}
