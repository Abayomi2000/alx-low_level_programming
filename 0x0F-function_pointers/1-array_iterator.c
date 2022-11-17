#include <stddef.h>
#include "main.h"

/**
 * array_iterator - function with three arguments
 * @array: int type pointer
 * @size: size_t argument
 * @action: function pointer
 *
 * Description: executes a function given as a parameter on each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
