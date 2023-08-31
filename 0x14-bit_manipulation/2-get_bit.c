#include "main.h"

/**
* get_bit - A function that get the value of bit at comm index.
* @n: The bit which get.
* @index: The index can be git the value start at 0.
* Return: if an error at the code occurs (-1)
*	other - value of in index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
