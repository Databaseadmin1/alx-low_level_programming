#include "main.h"
/**
 * void print_alphabet_x10(void) - Prints 10x alphabet
 */
void print_alphabet_x10(void)
{
	char ch;
	int num = 1;

	while (num++ <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}
