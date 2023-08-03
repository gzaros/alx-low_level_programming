#include <unistd.h>

/*
 * Writes the character ch to stdout
 * 
 *
 * Return: 1. on success and -1. on error.
 */

int _putchar(char ch)

{
	return (write(1, &ch, 1));
}

