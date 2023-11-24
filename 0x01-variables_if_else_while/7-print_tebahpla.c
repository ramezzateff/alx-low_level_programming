#include<stdio.h>
/**
 * main - entry
 * Description: 'prints alphabet in reverse'
 * Return:Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
