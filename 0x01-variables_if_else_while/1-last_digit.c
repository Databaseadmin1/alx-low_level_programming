#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - "Prints last digit of"
 *
 *Return: zero
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, ld);
	if (ld > 5)
		printf("and is greater than 5");
	else if (ld == 0)
		printf("and is zero");
	else if (ld < 6)
		printf("and is less than 6 ");
	else if (ld != 0)
		printf("and not zero\n");
	return (0);
}
