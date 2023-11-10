#include"variadic_functions.h"



/**
 * sum_them_all - add all integers
 * Calculates the sum of a variable number of integers.
 *
 * @n: - An unsigned integer representing the number
 * Return: the intger sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0 ;

	unsigned int i = n;

	va_list list;

	va_start(list, n);

	if(!n)
	return(0);

	while(i--)
		sum += va_arg(list, unsigned int);

	va_end(list);
	return (sum);
}
