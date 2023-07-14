#include <stdio.h>

/**
*main - Entry point
*
*Description: print numbers from 0 to 10
*
*Return: 0 (sucsess)
*/

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
