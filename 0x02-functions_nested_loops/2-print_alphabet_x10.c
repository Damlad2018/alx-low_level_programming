#include "main.h"

/**
  * print_alphabet_x10 - print the alphabest 10 times
  * Return: void here
  */

void print_alphabet_x10(void)
{
char b;
int i = 0;

while (i <= 9)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
i++;
}
}
