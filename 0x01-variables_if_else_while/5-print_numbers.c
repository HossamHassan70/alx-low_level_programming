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
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
