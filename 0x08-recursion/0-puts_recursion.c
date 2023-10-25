#include<stdio.h>
#include"main.h"

/**
  * _puts_recursion - main function
  *
  * @str: function parameter
  *
  * Return: Always 0.
  */

	void _puts_recursion(char *str)
	{
		if (*str == '\0')
		{
			_putchar('\n');
		}
		else
		{
			_putchar(*str);
			_puts_recursion(str + 1);
		}
	}
