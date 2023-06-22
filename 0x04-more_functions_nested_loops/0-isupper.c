#include "main.h"
/**
 *_isupper - function declaratition for function checking capital letters
 * @c: input,  parameter for integer c
 * return: 1 if c is a capital letter and zero otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
