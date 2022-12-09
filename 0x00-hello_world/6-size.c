#include <stdio.h>

int main(void)
{
	printf("size of a char: %lu bytes\n", sizeof(char));
	printf("size of an int: %lu bytes\n", sizeof(int));
	printf("size of a long int: %lu bytes\n", sizeof(long));
	printf("size of a lon long int:%lu bytes\n", sizeof(long long));
	printf("size of a float:%lu bytes\n", sizeof(float));
	return (0);
}
