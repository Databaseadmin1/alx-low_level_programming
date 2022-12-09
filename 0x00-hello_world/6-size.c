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
	printf("Size of a long int:%lubytes\n", sizeof(long int));
	printf("size of a float: %lu bytes\n", sizeof(float));
	printf("Size of a long long int:%lubytes\n", sizeof(long long int));
	return (0);
}
