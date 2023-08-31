#include "main.h"

/**
* print_binary - A functionthat Prints the binary number represntations of num.
* @n: A num to be print in binary num.
* Return: void.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
