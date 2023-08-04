#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 * Return: 1 if c uppercase or 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
