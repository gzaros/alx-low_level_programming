#include "main.h"

/**
 * clear_bit -> Sets the value of a bit to 0 at a given indice
 *
 * @n: Input Number
 * @indice: Input indice
 *
 * Return: Depend Condition
*/

int clear_bit(unsigned long int *n, unsigned int indice)
{
	unsigned long int _num = 1;

	if (indice > 63)
		return (-1);
	_num <<= indice;
	*n = *n & ~_num;
	return (1);
}

