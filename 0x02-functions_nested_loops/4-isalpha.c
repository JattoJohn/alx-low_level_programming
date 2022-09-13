#include "main.h"

/** _isalpha(int c) -  checks for alphabetic character.
 * Returns: Always 1 if c is a letter, lowercase or uppercase.
 * Returns: 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
