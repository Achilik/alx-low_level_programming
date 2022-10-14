#include <stdio.h>

/**
* main - Retry point
* Return: (0)
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
