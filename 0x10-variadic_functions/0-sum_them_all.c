#include "variadic_functions.h"
/**
 * sum_them_all - yeb prototype
 * @n: int
 * @...: int
 * Return: 0, sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return(0);
	}
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
