#include "main.h"

/**
 * get_endianness - prog checks the endianess
 * Return: 0 if big edian, 1 if little
*/
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
