#include "main.h"
/**
 * _abs - prints absolute value of a number
 *@n: num to be calculated  
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return(n);
	}
	else if (n < 0)
	n = -1 * n;
	return (n);
}
