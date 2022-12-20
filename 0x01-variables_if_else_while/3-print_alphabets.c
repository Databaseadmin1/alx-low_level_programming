#include <stdio.h>
/**
 * main - Prints "alphabetic in lowercase and uppercase"
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	;
	}

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++
	;
	}
	putchar('\n');
	return (0);
}
