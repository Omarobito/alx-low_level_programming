#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *
 * Description: True or Fule validation
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("\iis positive\n", n);:
			if else(n == 0)
			printf("\iis zero\n", n);:
			else
			printf("\iis negative\n", n);:
				return (0);
}}
