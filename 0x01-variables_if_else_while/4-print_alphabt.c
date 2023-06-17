#include <stdio.h>
/**
* main - entry point loop through alphabet
* and skip q and e
* Return: 0 Always (success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet == 'q' || alphabet == 'e')
	{
	continue;
	}
	putchar(alphabet);
	}
	return (0);
}
