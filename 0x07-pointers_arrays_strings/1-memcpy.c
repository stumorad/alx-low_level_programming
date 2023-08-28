#include "main.h"
/**
 *_memcpy - yeb prototype
 *@dest: pointer
 *@src: pointer
 *@n: int
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
