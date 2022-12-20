#include <stdio.h>
/**
 * main - Prints "alphabetic in lowercase and uppercase"
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char cha = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	;
	}
	while (cha <= 'Z')
	{
		putchar(cha);
		cha++
	;
	}
	putchar('\n');
	return (0);
}
