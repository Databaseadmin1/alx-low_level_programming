#include <stdio.h>
/**
 * main - Prints "alphabetic in lowercase and uppercase"
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char hc = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	;
	}
	while (ch <= 'Z')
	{
		putchar(hc);
		ch++
	;
	}
	putchar('\n');
	return (0);
}
