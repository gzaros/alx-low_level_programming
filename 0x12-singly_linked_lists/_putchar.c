#include <unistd.h>

/**
 * _putchar - prints the character c
 * @c: character
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
