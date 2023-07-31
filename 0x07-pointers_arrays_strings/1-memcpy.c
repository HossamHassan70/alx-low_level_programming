#include "main.h"

/**
 *_memcpy - A function that copies memory area from "src" to "dest"
 *@dest: Memory where is stored
 *@src: Memory where is copied
 *@n: A number of bytes
 *
 *Return: Copied memory with n bytes changed (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
