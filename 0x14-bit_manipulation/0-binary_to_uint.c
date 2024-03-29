#include "main.h"

/**
 * binary_to_uint -> Converts binary to unsigned int
 *
 * @b: Input String Binary
 *
 * Return: Depending Condition
*/


unsigned int binary_to_uint(const char *b)
{
	
	unsigned int i, len, _num = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (i = 0; i < len; i++)
	{
		_num = _num * 2 + (b[i] - '0');
	}
	return (_num);
	
}

