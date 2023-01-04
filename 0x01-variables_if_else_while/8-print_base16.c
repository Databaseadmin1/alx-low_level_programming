#include <stdio.h>
/**
 * main - Prints "numbers of base 16"
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char ch = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		++n
		;
	}
	while (ch <= 'z')
	{
		putchar(ch);
		++ch
		;
	}
	putchar('\n');
	return (0);
}
