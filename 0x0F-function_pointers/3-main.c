#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main – main functiom
* @argc: first
* @argv: second
*
* Return: 0
*/

int main(int argc, char *argv[])
{
int (*oprt)(int, int);

if (argc != 4)
{
printf(“Errorn”);
exit(98);
}

oprt = get_op_func(argv[2]);

if (!oprt)
{
printf(“Errorn”);
exit(99);
}

printf(“%dn”, oprt(atoi(argv[1]), atoi(argv[3])));
return (0);
}
