#include "main.h"

/**
 * _print_rev_recursion - A function that Prints a string in reverse.
 * @s: The string to be printed.
 * main function return to 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
