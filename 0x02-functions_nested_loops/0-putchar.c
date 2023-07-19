<<<<<<< HEAD
#include "main.h"

/**
* main - Entry point
* Print _putchar
* Return: 0 Sucsess
=======
include "main.h"

/**
* main - Entry point
*
* Description: Print _putchar using putchar prototype
*
* Return: always 0 (sucsess)
>>>>>>> 874488dd0bbf77b31e1c3efb2ee191ab0ab29334
*/

int main(void)
{
<<<<<<< HEAD
	
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
=======
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

>>>>>>> 874488dd0bbf77b31e1c3efb2ee191ab0ab29334
	return (0);
}
