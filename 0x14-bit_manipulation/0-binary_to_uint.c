#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: the binary.
 *
 * Return: the converted number, or 0 if.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int dan, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (dan = 0; b[dan] != '\0'; dan++)
		;

	for (dan--, base_two = 1; dan >= 0; dan--, base_two *= 2)
	{
		if (b[dan] != '0' && b[dan] != '1')
		{
			return (0);
		}

		if (b[dan] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
