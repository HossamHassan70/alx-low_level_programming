#include <stdio.h>

/**
*main - Entry point
*
*Description: print all alphabet letters from z to a
*
*Return: 0 (sucsess)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
