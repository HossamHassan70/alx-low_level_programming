#include "main.h"

/**
 * set_string - Sets the value of the pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
