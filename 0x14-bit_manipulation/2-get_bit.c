#include "main.h"

/**
 * get_bit - a function returns the value of a
 * bit at a given index.
 * @n: unsigned long int n.
 * @index: is the index, starting from 0.
 *
 * Return: the value of the bit at index index or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);

	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1);
		}
	}

	return (-1);
}
