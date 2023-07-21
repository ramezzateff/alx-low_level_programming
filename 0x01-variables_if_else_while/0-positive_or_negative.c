#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
}

