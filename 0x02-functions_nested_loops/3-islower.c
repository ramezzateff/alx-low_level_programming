#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase charcter. another cases, shows 0
 * @c: The character in ASCII code
 * Return: always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
