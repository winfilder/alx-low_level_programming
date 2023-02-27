#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
* Return 0 (SUCCESS)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %1u byte(s)\n", (unsigned long)sizeof(b));
printf("size of an int: %1u byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %1u byte(s)\n", (unsigned long long)sizeof(d));
printf("size of a float:%1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
