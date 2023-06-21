#include "main.h"
/**
 * print_alphabet_x10 - function declaration that write a complete
 * set of alphaabet completely 10 times
 * Return: void Always (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
