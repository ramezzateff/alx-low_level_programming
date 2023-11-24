#include<stdio.h>
/**
 * main - Entry
 * Description: prints numbers of base 16
 * Return:Always 0
 */
int main(void)
{
	int hex;
	char ch;

	for (hex = 0; hex < 10; hex++)
		putchar(hex + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
