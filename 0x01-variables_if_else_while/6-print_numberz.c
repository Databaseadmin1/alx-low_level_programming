#include <stdio.h>
/**
 * main -Prints "single digit numbers of base 10"
 * Return: 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar('0' + n);
		++n
		;
	}
	putchar('\n');
	return (0);
}
