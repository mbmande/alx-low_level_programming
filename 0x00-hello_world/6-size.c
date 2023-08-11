#include <stdio.h>

/**
 * main - main function
 *
 * Return: return 0 when successed
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byyte(s)", sizeof(long int));
	printf("size of long long int: %lu byte(s)", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);
}
