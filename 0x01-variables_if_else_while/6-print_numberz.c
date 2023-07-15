#include <stdio.h>

/**
*main - Entry point
*
*Description: print numbers from 0 to 9
*
*Return: 0 (sucsess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert to ACII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
