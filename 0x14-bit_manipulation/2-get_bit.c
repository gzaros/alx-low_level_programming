#include "main.h"
#include <stdio.h>

/*
 *
 * Returns a value of a given indice
 * 
 * Number to check the value
 * 
 * Always Return: value at given indice or -1 if an error occours
 *
 */


int get_bit(unsigned long int n, unsigned int indice)

{
	unsigned int i;

	if (indice > (sizeof(8) * 8))
		return (-1);

	for (i = 0; i < indice; i++)
		n = n >> 1;
	return ((n & 1));
}

