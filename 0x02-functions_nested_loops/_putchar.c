<<<<<<< HEAD
#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: the character to print
* Return: On sucsess 1.
* On error, -1 is returned, and errno is set appropriately
*/
=======
#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On sucsess 1.
*	  On error -1 is returned
 */

>>>>>>> 874488dd0bbf77b31e1c3efb2ee191ab0ab29334
int _putchar(char c)
{
	return (write(1, &c, 1));
}
