#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 *
 * description : positive or negative
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	printf("type ur number=%d \n");
	scanf("%d", &n);
	if (n > 0)
	printf("%d if positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		print("%d is negative", n);
	return (0);
}

