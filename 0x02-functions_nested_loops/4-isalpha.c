#include "main.h"

/**
 * _isalpha - functions that checks for alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if its an alphabet
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
