#include "main.h"


/**
 * _abs - Computers the absolute
 * @b: The number computed
 * Return: Absolute value
 */
int _abs(int b)
{
if (b < 0)
{
int abs_val;


abs_val = b * -1;
return (abs_val);
}
return (b);
}
