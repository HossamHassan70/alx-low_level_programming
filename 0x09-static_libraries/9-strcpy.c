#include "main.h"

/**
* char *_strcpy - A function that copies the string pointed to dest by src.
* @dest: copy to this var.
* @src: copy from this var.
* Return: string (dest).
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';

	return (dest);
}
