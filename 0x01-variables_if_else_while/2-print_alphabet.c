#include <stdio.h>
/**
 *main - Prints "alphabetic in lower case"
 *Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++
	;
	}
	putchar('\n');
	return (0);
}
