#include "main.h"

/**
 * power - it cal the power of a number
 * @low: the first
 * @high: the second
 * Return: number
 */

unsigned long int power(unsigned int low, unsigned int high)
{
	unsigned int w;
	unsigned long int number;

	number = 1;
	for (w = 1; w <= high; w++)
		number *= low;
	return (number);
}

/**
 * print_binary - it prints binary number
 * @n: the number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int dvs;
	unsigned long int chck;
	char flag;

	flag = 0;
	dvs = power(2, sizeof(unsigned long int) * 8 - 1);
	while (dvs != 0)
	{
		chck = n & dvs;
		if (chck == dvs)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dvs == 1)
			_putchar('0');
		dvs >>= 1;
	}
}
