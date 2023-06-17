#include <stdio.h>
/**
 * main - entry point to print hexadecimal numbers
 * Return: 0 Always (success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 16; number++)
	{
		if (number < 10)
		{
			putchar(number + '0');
		}
		else
			putchar((number - 10) + 'a');
	}

	putchar('\n');
	return (0);
}
