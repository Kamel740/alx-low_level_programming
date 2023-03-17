#include <stdio.h>
/**
*main - print alphapet from a to z and A to Z
*
*Return: Always 0 (Success)
*/
int main(void)
{int i;
	for (i = 97; i <= 122; i++)
{
	putchar(i);
}
	for (i = 65; i <= 90; i++)
{
	putchar(i);
}
	putchar('\n');
	return (0);
}
