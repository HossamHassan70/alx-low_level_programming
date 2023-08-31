#include "main.h"

/**
* flip_bits - A function that count a num of bits i ned to flip.
* @n: For number.
* @m: For num to flip n.
* Return: The necessary num bit to flip get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
