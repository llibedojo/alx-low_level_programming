#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
/* Seed for the random number generator */
	srand(time(NULL))

/* Generate a random number between -100 and 100 */
	n = rand() % 201 - 100;

	printf("The number %d is ", n);

	if (n > 0)
	{
		printf("positive\n");
	}

	else if (n < 0)
	{
		printf("negative\n");
	}

	else
	{
		printf("zero\n");
	}

}
