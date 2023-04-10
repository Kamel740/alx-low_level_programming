#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - return the sum
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	const char *arg = argv[i];

	while (*arg)
	{
		if (!isdigit(*arg))
		{
			printf("Error\n");
			return (1);
		}
		arg++;
	}
	num = atoi(argv[i]);
	if (num < 0)
	{
	printf("Error\n");
	return (1);
	}
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
