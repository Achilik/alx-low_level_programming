#include "main.h"

/**
* main - _putchar writes the character c to student
* @c: the character to print
* Return: On success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
