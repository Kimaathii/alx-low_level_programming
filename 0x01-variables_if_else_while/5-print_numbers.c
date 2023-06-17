#include <stdio.h>
/**
 * main - entry point print numbers from 0 to 9
 * Return: 0 Always (success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	return (0);
}
