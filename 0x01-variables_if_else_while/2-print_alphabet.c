#include <stdio.h>
/**
 * main - Entry
 * Description: 'print alphabets lowercase'
 * Return:Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
