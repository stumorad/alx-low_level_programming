#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - yeb mainn
 *
 * Return: 0
 */

int main(void)
{
	/* your code goes there */
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'e' && i != 'q')
			putchar(i);

	return (0);
}
