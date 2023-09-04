#include "main.h"

/**
* read_textfile- The function that can Read text from file and print to STDOUT.
* @filename: A text file which print read.
* @letters: A num of letter read.
* Return: (w) - for actual num of bytes read and print
*	0 - when filename is NULL or function fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *per;
	ssize_t fpt;
	ssize_t w;
	ssize_t t;

	fpt = open(filename, O_RDONLY);
	if (fpt == -1)
		return (0);

	per = malloc(sizeof(char) * letters);
	t = read(fpt, per, letters);
	w = write(STDOUT_FILENO, per, t);

	free(per);
	close(fpt);
	return (w);
}
