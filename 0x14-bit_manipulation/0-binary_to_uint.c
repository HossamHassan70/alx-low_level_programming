#include "main.h"

/**
* binary_to_uint - A function that Convert a binary num to unsigned int
* @b: A str containing binary num.
* Return: The converted num.
 */

unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		decimal = 2 * decimal + (b[y] - '0');
	}

	return (decimal);
}
