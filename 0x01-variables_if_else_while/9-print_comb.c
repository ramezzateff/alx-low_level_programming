#include <stdio.h>
/**
 * main - Entry
 * Description: prints combinations single-digit numbers
 * Return:Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
