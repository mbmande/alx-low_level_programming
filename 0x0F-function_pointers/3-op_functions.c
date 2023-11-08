#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add – function
* @a: first
* @b: second
* Return: …
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub – function
* @a: first
* @b: second
*
* Return: 0
*/

int op_sub(int a, int b)
{
return (a – b);
}

/**
* op_mul – function
* @a: first
* @b: second
* Return: 0
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div – function
* @a: first
* @b: second
* Return: 0
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf(“Errorn”);
exit(100);
}

return (a / b);
}

/**
* op_mod – function name
* @a: first
* @b: second
* Return: 0
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf(“Errorn”);
exit(100);
}

return (a % b);
}
