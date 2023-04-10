#include <stdio.h>
/**
 * main - print the number of the arguments passed to the program
 * @argc: the number of the arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
