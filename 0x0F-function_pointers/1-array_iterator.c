#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - A function prints each array elem on a newl
* @array: An array
* @size: How many element to print
* @action: pointer to print in regular or hex
* Return: No return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
