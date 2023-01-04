#include <stdio.h>
/**
 * main - Prints "conbination of single digit numbers"
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++
		;
	}
	putchar('\n');
	return (0);
}
