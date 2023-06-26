#include "main.h"

/**
 * swap_int - Swaps the values of two character.
 * @x: The first character to be swapped.
 * @y: The second character to be swapped.
 */
void swap_int(char *x, char *y)
{
	char tmp = *x;
	*x = *y;
	*y = tmp;
}
