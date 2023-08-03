#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Sets the value of a bit to 1 at a given indice
 * 
 * indice to replace in the number
 * 
 * Alway Return: 1 if it work or -1 if an error occurr
 *
 */

int set_bit(unsigned long int *n, unsigned int indice)

{
	unsigned int aux;

	if (indice > sizeof(unsigned int) * 16)
		return (-1);
	aux = 1;
	aux = aux << indice;
	*n = ((*n) | aux);
	return (1);
}

