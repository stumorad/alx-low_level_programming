#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - yeb prototype
 * @a: int
 * @b: int
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - yeb prototype
 * @a: int
 * @b: int
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - yeb prototype
 * @a: int
 * @b: int
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - yeb prototype
 * @a: int
 * @b: int
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - yeb prototype
 * @a: int
 * @b: int
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
