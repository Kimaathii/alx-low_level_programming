#include <stdio.h>
/**
 * main - entry point to print base 10 numbers with putchar
 * Return: 0 Always (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
