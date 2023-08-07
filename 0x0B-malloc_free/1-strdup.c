#include "main.h"

/**
* _strdup - A function that return a pointer to new memory space location
* @str: char
* Return: to NULL if faild , to 0 (Sucsess)
 */

char *_strdup(char *str)
{
	char *h;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	h = malloc(sizeof(char) * (i + 1));

	if (h == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		h[r] = str[r];

	return (h);
}
