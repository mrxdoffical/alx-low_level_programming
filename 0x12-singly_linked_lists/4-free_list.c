#include"lists.h"
/**
 * free_list - frees the list_t
 * @head: header for the node
*/
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
	return;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
