#include <stdio.h>
/**
 * main - Entry
 * Description: 'prints all single digit numbers of base 10'
 * Return:Always 0
 */
int main(void)
{
       int num;
       char num2;

	for (num = 0; num < 10; num++)
	{
		num2 = num + '0';
		putchar(num2);
	}
	putchar('\n');
	return(0);
}
