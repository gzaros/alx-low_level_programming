#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename:  Name Input File
 * @messages:  Text Input
 *
 * Return: Depend Condition
*/

int append_text_to_file(const char *filename, char *messages)
{
	int f_open, f_wr, i;

	if (filename == NULL)
		return (-1);
	f_open = open(filename, O_WRONLY | O_APPEND);
	if (f_open < 0)
		return (-1);
	if (messages == NULL)
	{
		close(f_open);
		return (1);
	}
	for (i = 0; messages[i] != '\0'; i++)
		;
	f_wr = write(f_open, messages, i);
	if (f_wr < 0)
		return (-1);
	close(f_open);
	return (1);
}

