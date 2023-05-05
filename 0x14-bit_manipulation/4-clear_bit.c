#include "main.h"

/**
 * clear_bit - a fundtion that sets the value
 * of a bit to 0 at a given index.
 * @n: pointer of an unsigned long int *n.
 * @index: index is the index, starting from 0.
 *
 * Return: return 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y;

	if (index > 63)
		return (-1);

	y = 1 << index;

	if (*n & y)
		*n ^= y;

	return (1);
}
