#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - this is my main function
 *
 * Return: return 0 if successful
 */

int main(void)
{
		int n;
		int o;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		o = n % 10;

		if (o > 5)
			printf("Last digit of %d is %d and is greater than 5", n, o);
		else if (o == 0)
			printf("Last digit of %d is %d and is 0", n, o);
		else if (o < 6 && o != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0", n, o);
		printf("\n");
		return (0);
}
