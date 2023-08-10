#include "main.h"

/**
* *malloc_checked - A function that allocates memory using malloc
* @b: number of bytes to allocate
* Return: To the pointer of allocated memory (ptr)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b); /*Allocate to ptr*/

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
