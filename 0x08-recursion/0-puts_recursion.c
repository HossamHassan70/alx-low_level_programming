#include "main.h"

/**
 * _puts_recursion - A function like puts() that prints a string.
 * @s: input
 * main function return to 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
