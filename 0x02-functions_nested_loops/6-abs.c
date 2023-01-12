#include "main.h"
/**
 * _abs - prints absolute value of a number
 *@n: num to be calculated  
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
		putchar(n + '0');
	}
return (n);
}
