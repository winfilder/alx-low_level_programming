#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: function parameter
 * @a: function parameter
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
