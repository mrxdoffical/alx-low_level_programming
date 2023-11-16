#ifndef _LISTS_H_
#define _LISTS_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
/**
 * struct node - single linked list
 * @str: string
 * len: length of string
 * @next: pointer to the next node
*/

int _putchar(char c);
size_t print_list(const list_t *h);

typedef struct lists_s {
	char *str;
	unsigned int len;
	struct lists_s *next;
} list_t;

#endif