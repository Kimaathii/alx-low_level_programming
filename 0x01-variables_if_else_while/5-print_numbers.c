#include <stdio.h>
/**
 * main - entry point print numbers from 0 to 9
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
