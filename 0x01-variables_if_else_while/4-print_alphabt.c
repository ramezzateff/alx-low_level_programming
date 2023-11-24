#include <stdio.h>
/**
 * main - Entry
 * Description: 'print alphabets lowercase'
 * Return:Always 0
 */
int main(void)
{
	char exp = 'e', exp2 = 'q', ch;;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == exp || ch == exp2)
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
