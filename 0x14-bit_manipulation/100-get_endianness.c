#include "main.h"
/**
 * get_endianness - yeb prototype
 * Return: pointer with value 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
