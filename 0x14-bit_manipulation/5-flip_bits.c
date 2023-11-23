#include<stdio.h>
#include"main.h"

/**
 * flip_bits - return flipped bits
 * @n: first number
 * @m: second
 * Return: number of bits to flip to convert numbers
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int c;

	while (xor)
	{
		if (xor & 1ul)
		c++;
		xor = xor >> 1;
	}
	return (c);
}
