#include "main.h"

/**
 * flip_bits -> Flip to get from one number to another
 *
 * @n: Input Number
 * @m: Input Number
 *
 * Return: Bits Number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int cnt = 0;

	while (num)
	{
		cnt += num & 1;
		num >>= 1;
	}
	return (cnt);
}

