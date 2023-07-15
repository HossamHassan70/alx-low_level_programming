#include <stdio.h>

/**
*main - Entry point
*
*Description: print numbers base16 in lowercase
*
*Return: 0 (sucsess)
*/

int main(void)
{
	int digit = 48; /*48; is decimal rep of 0*/

	while (digit <= 102) /*102; is decimal of f*/
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
