#include <stdio.h>

/**
 *  main - Prints all single digit numbers of base 10 starting from 0,
 *   only using putchar and without char variables.
 *
 *   Return: Always 0.
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}

	putchar(10); /* this is an ascii code for new line*/

	return (0);

}
