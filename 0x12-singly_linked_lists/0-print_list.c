#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>


/**
 * _strlen - prints string size
 * @s: char vriable
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	return (0);

	while (*s++)
	i++;
	return (i);
}

/**
 * print_list - prints lists
 * @h: head of th list
 * Return: number of nodes and it data
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nill)");
	h = h->next;
	i++;
	}
	return (i);
}
