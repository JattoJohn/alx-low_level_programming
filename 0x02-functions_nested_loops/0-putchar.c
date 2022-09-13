#include "_putchar.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *x = "_putchar";

	while (*x)
	{
		_putchar(*x);
		x++;
	}
	_putchar('\n');

	return (0);
}
