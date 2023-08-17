#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*
 * sum_them_all -  returns the sum of all its parameters.
 * @n: number of parameters.
 *
 * Return n == 0
 * otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum = 0, numbers;

	va_start(arg, n);

	for (numbers = 0; numbers < n; numbers++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
