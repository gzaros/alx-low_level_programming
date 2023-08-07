#include "main.h"

/**
 * read_textfile - Processes a text file and outputs it to stdout
 *
 * @filename: Input Name File
 * @messages: Input Number
 *
 * Return: Depend Condition
*/

ssize_t read_textfile(const char *filename, size_t messages)
{
	int f_open, f_rd, f_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	f_open = open(filename, O_RDONLY);
	if (f_open < 0)
		return (0);
	buffer = (char *) malloc(messages * sizeof(char));
	if (buffer == NULL)
		return (0);
	f_rd = read(f_open, buffer, messages);
	if (f_rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[f_rd] = '\0';
	f_wr = write(STDOUT_FILENO, buffer, f_rd);
	if (f_wr < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(f_open);
	return (f_wr);
}

