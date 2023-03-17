#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char i = 'a';
	while (i >= 97 && i <= 122)
{
		if (i != 113 && i != 101)
{
		putchar(i);
}
		i++;
}
	putchar('\n');
	return (0);
}
