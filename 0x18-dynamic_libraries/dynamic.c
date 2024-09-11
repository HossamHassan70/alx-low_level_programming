#include <unistd.h>
#include <stdlib.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _islower - checks for lowercase character
* @c: The character to check
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
* _isalpha - checks for alphabetic character
* @c: The character to check
*
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
* _abs - computes the absolute value of an integer
* @n: The integer to compute the absolute value of
*
* Return: The absolute value of n
*/
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
* _isupper - checks for uppercase character
* @c: The character to check
*
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
* _isdigit - checks for a digit (0 through 9)
* @c: The character to check
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
* _strlen - returns the length of a string
* @s: The string to get the length of
*
* Return: The length of the string
*/
int _strlen(char *s) {

	int length = 0;

	while (s[length] != '\0') {
		length++;
	}
	return (length);
}

/**
* _puts - prints a string to stdout
* @s: The string to print
*/
void _puts(char *s) {

	while (*s) {
		_putchar(*s++);
	}
}

/**
* _strcpy - copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest
* @dest: The destination buffer
* @src: The source string
*
* Return: The pointer to dest
*/
char *_strcpy(char *dest, char *src) {

	char *start = dest;

	while ((*dest++ = *src++));
	return (start);
}

/**
* _atoi - converts a string to an integer
* @s: The string to convert
*
* Return: The converted integer
*/
int _atoi(char *s) {

	int num = 0, sign = 1;

	while (*s == ' ') s++;
	if (*s == '-' || *s == '+') {
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9') {
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}

/**
* _strcat - concatenates two strings
* @dest: The destination string
* @src: The source string
*
* Return: The pointer to dest
*/
char *_strcat(char *dest, char *src) {

	char *start = dest;

	while (*dest) dest++;
	while ((*dest++ = *src++));
	return (start);
}

/**
* _strncat - concatenates two strings, using at most n bytes from src
* @dest: The destination string
* @src: The source string
* @n: The maximum number of bytes to use from src
*
* Return: The pointer to dest
*/
char *_strncat(char *dest, char *src, int n) {

	char *start = dest;

	while (*dest) dest++;
	while (n-- && (*dest++ = *src++));
	*dest = '\0';
	return (start);
}

/**
* _strncpy - copies a string, using at most n bytes
* @dest: The destination string
* @src: The source string
* @n: The maximum number of bytes to copy
*
* Return: The pointer to dest
*/
char *_strncpy(char *dest, char *src, int n) {

	char *start = dest;

	while (n-- && (*dest++ = *src++));
	return (start);
}

/**
* _strcmp - compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: 0 if the strings are equal, a negative value if s1 is less than s2,
* a positive value if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2) {

	while (*s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
* _memset - fills memory with a constant byte
* @s: The pointer to the memory area
* @b: The value to be set
* @n: The number of bytes to be set to the value
*
* Return: The pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n) {

	char *start = s;

	while (n--) {
		*s++ = b;
	}
	return (start);
}

/**
* _memcpy - copies memory area
* @dest: The pointer to the destination memory area
* @src: The pointer to the source memory area
* @n: The number of bytes to copy
*
* Return: The pointer to the destination memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n) {

	char *start = dest;

	while (n--) {
		*dest++ = *src++;
	}
	return (start);
}

/**
* _strchr - locates a character in a string
* @s: The string to search
* @c: The character to locate
*
* Return: The pointer to the first occurrence of the character in the string,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c) {

	while (*s) {
		if (*s == c) {
			return (s);
		}
		s++;
	}
	return (NULL);
}

/**
* _strspn - gets the length of a prefix substring
* @s: The string to search
* @accept: The string containing the characters to match
*
* Return: The number of bytes in the initial segment of s which consist only
* of bytes from accept
*/
unsigned int _strspn(char *s, char *accept) {

	unsigned int count = 0;

	while (*s && strchr(accept, *s++)) {
		count++;
	}
	return (count);
}

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: The string to search
* @accept: The string containing the characters to match
*
* Return: The pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept) {

	while (*s) {
		if (strchr(accept, *s)) {
			return (s);
		}
		s++;
	}
	return (NULL);
}

/**
* _strstr - locates a substring
* @haystack: The string to search
* @needle: The substring to find
*
* Return: The pointer to the beginning of the substring in the string,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle) {

	if (*needle == '\0') {
		return (haystack);
	}
	char *p1 = haystack, *p2 = needle;

	while (*p1) {
		char *p1Start = p1;

		while (*p1 && *p2 && (*p1 == *p2)) {
			p1++;
			p2++;
		}
		if (!*p2) {
			return (p1Start);
		}
		p1 = p1Start + 1;
		p2 = needle;
	}
	return (NULL);
}
