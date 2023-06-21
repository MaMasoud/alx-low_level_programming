#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
int ch;
for (int n = 0; n < 10; n++)
{

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}

_putchar('\n');

}

}
