#include "main.h"
/**
 * print_alphabet - function declaration to print alphabets
 * Result: 0 Always (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
