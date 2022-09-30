#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *  @argc: number of command lines
 *  @argv: array containing the command line argument.
 *  Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
