#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @des: destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcat(char *des, char *src);
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i <= scrlen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
