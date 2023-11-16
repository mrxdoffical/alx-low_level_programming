#include"lists.h"
/**
 * free_list - frees the list_t
 * @head: header for the node
*/
void free_list(list_t *head)
{
	list_t *node = head;

	while ((node = node->next) != NULL)
	{
		free(node->str);
		free(node);
	}
}
