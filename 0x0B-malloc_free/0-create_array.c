#include "main.h"

/**
* create_array - A function that creates an array of char c.
* @size: A size of array.
* @c: A char to assigned.
* Return: pointer to array (str), NULL if fail.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
