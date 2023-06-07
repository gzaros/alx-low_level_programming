#include <unistd.h>



/**
 * _putchar ==> Salah Eddine hamidi Gzaros
 * @c: The character to print
 */


int _putchar(char c)
{

	return (write(1, &c, 1));
	
}
