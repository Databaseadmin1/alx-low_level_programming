#include <stdio.h>
/**
 * main -Prints "single digit numbers of base 10"
 * Return: 0
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch + '0');
		ch++
		;
	}
	putchar('\n');
	return (0);
}
