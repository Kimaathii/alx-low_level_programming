#include "main.h"
/**
 * _islower- function is to check for lowercase alphabet using
 * different function parameter availabe
 * @c: The character to be checked.
 * Return: 1 or 0 as the case may be
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
