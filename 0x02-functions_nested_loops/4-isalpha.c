#include "main.h"
/**
  * _isalpha - Checks charcter
  * @b: The charceter
  * Return: 1 for all
  */

int _isalpha(int b)

{
if ((b >= 65 && b <= 90) || (b >= 97 && b <= 122))
{
return (1);
}
return (0);
}
