#include <stdio.h>
/**
 * main -Prints size of varios types
 *
 * Return: zero
 */
int main(void)
{
	printf("Size of a char:%lubytes\n", sizeof(char));
	printf("Size of an int:%lubytes\n", sizeof(int));
	printf("Size of a long int:%lubytes\n", sizeof(long));
	printf("Size of a float%lubytes\n", sizeof(float));
	return (0);
}
