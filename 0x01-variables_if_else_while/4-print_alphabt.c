#include <stdio.h>
/**
 * main - Prints "alphabetic in lowercase except q an e"
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
	ch++
	;
	}
	return (0);
}
