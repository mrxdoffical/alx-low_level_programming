#include"function_pointers.h"
/**
 * array_iterator - prints names
 * @array: input
 * @size: size of array
 * @action: action taken
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
	{
		while (array <= last)
		action(*array++);
	}
}

