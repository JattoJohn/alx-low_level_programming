#include "main.h"

/**
 * _isalpha(int c) -  checks for alphabetic character.
 * @c: the character to be checked
 * Returns: Always 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
