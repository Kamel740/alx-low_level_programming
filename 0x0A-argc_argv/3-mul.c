#include <stdio.h>
#include <stdlib.h>

/**
 * main - mulitplication two numper
 * @argv: array of arguments
 * @argc: numper of arguments
 * Return:0
 */

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d\n", result);
	return (0);
}
