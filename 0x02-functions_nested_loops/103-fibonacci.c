#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, x, j, k, sums;

	x = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		x = x + j;
		x = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
