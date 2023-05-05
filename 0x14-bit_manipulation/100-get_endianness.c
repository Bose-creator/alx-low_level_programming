#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: return 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int g;
	char *h;

	g = 1;
	h = (char *) &g;

	return ((int)*h);
}
