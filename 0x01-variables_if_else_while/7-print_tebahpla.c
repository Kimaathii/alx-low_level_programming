#include <stdio.h>
/**
 * main - entry point to print alphabet in reverse
 * Return: 0 Always (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
