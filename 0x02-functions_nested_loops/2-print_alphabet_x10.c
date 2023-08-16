#include"main.h"
/**
 * print_alphabet_x10 - using putchar
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ch++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
				_putchar(ch);
			_putchar('\n');

	}
}