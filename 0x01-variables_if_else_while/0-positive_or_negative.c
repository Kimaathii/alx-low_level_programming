#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always(successful)
 * more headers goes there
  */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	};

	if (n == 0)
	{
		printf("%d is zero", n);
	};

	if (n < 0)
	{
		printf("%d is negative", n);
	};

	return (0);
}
