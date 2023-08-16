#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes - A function that prints the opcodes of this program
* @a: Address of the main function
* @n: A number of bytes to print
* Return: No return
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
* main - Entry Point prints the opcodes own main function
* @argc: A number of arguments passed to the function
* @argv: An array of pointers to arguments
* Return: always O
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);

	return (0);
}
