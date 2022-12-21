#include <stdio.h>
/**
 * main - Prints "alphabetic in lowercase except q an e"
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	putchar('a');
	while (ch <= 'z')
	{
		ch++;
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
	}
	return (0);
}
