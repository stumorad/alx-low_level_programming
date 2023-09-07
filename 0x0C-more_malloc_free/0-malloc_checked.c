#include "main.h"
/**
 * *malloc_checked - yeb prototype
 * @b: unsigned int
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
