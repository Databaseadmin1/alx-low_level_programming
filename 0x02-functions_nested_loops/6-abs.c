#include "main.h"
/**
 * _abs - prints absolute value of a number
 * Return: 0.
 */
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n + '0');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = -1 * n;
		putchar(n);
	}
	return (0);
}
