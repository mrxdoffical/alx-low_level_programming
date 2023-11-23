#include<stdio.h>
#include"main.h"

/**
 * clear_bit - clean bit
 * @n: number to index
 * @index: index
 * Return: return 1 on success and -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1)

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
