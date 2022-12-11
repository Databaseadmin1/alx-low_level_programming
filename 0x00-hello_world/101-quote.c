#include<stdio.h>
#include<unistd.h>
/**
 * main - Prints "and that piece of art is useful\" - Dora Korpar,"
 * main - Prints " 2015-10-19"
 *
 * Return:1
 */
int main(void)
{
	write("and that piece of art is useful\"");
	write(" - Dora Korpar, 2015-10-19", stderr);
	return (1);
}
