#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable
 *
 * Return: 0 after printing the function
 */

int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);

	if (n % 10 > 5)
	{
		printf("and is greater than 5");
	}

	else if (n % 10  == 0)
	{
		printf("and is 0");
	}

	else
	{
		printf("and is less than 6 and not 0");
	}
	return (0);


}
