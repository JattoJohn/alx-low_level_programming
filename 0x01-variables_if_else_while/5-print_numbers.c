#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10
 *starting from 0, followed by a new line.
 *Return: ALways 0 (Success)
 */
int main(void)
{
	int n;
	
	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n);
	return (0);
}
