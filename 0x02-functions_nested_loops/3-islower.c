#include "main.h"
/**
  * _islower - entry point
  * Description: function that checks for lowercase character
  * @b:character to check if it islowercase
  * Return: 0-if lowercase, 1-if not
  */

int _islower(int b)
{
if (b >= 'a' && b <= 'z')
{
return (1);
}
else
{
return (0);
}
}
