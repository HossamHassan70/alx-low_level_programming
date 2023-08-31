#include "main.h"

/**
* clear_bit - A function that set value to bit and give index 0.
* @n: A pointer to the bit.
* @index: The index set value start at 0.
* Return: if an errors occurs -1 , other 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
