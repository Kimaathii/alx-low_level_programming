#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 * Return: 0 Always(successful)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = (n < 0) ? -1 * (n % 10) : n % 10;
	/* your code goes there */

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	};
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	};
	if ((n < 6) && !(n == 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	};
	return (0);
}
