#include <stdio.h>

/**
 * main - main function
 *
 * Return: return 0 when successed
 */

int main(void)
{
	printf("size of a char: %d byte(s)", sizeof(char));
	printf("size of int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byyte(s)", sizeof(long int));
	printf("size of long long int: %d byte(s)", sizeof(long long int));
	printf("size of float: %d byte(s)", sizeof(float));
	return (0);
}
