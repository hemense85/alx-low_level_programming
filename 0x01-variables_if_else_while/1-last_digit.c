#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - empty
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than5\n", n, a);
	}
        else if (a == 0)
	{
		printf("Last digit of %d is %d is 0\n", n, a);
	}
	else
	{ 
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);

}	
