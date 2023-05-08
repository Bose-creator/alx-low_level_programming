#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		printf("Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %d)\n", res);
	return (0);
}
