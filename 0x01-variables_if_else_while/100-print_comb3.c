#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int p, s;

	for (p = 48; p <= 57; p++)
	{
		for (s = 48; s <= 57; s++)
		{
			putchar(p);
			putchar(s);
			if (p != 57 || s != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);	
}