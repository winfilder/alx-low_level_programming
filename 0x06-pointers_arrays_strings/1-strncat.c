#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number  of characters to append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
		int srclen = 0;
		int i;

		for (i = 0 ; dest[i] != '\0' ; i++)
			destlen++;
		for (i = 0 ; scr[i] != '\0' ; i++)
			srclen++;
		for (i = 0 ; i < n ; i++)
			dest[destlen + i] = srci];
		return (dest);
}
