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
		putchar(ch);
		ch++;
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
