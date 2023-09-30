#include "main.h"
/**
 * clear_bit - yeb prototype
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
