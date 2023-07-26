#include "main.h"
/**
 * swap_int - swaps the values of the integers
 * using two inputs parameters
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
