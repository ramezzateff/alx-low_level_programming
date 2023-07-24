#include "main.h"
/**
 * _isalpha - shows 1 if the input is a
 *  Letter another case, shows 0
 *  @c: the character in ASCII coe
 *  Return: always 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
