#include "main.h"
/**
 * swap_int - Swap the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
