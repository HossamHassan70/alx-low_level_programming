#include "main.h"

/**
 * _isdigit - check if numbers through 0 - 9
 * @c: character to be checked
 * Return: 1 if c is a digit or 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
