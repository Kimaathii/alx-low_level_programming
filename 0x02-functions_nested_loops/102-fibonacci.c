#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, a, j, c;

	a = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		c = a + j;
		a = j;
		j = c;
		printf("%lu", c);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
