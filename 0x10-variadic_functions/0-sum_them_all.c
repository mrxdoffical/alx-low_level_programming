#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
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
	va_list list;

	va_start(list, n);
	int resut = 0 , i = n;
	while(i--)
		resut += va_arg(list,int);

	va_end(list);
	return (resut);
}
