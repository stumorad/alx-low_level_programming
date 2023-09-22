#include <stdlib.h>
void first(void) __attribute__ ((constructor));

/**
 * first - bro wants to print before the main XD
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
