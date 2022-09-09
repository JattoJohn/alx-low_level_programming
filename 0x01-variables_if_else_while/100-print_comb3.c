#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int p, s;

	for (p = 32; p <= 65; p++)
	{
		for (s = 32; s <= 65; s++)
		{
			putchar(p);
			putchar(s);
			if (p != 32 || s != 65)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	puchar('\n);
	return (0);	
}
