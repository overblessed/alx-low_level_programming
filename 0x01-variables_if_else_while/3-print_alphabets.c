#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
		putchar(lu);

	for (lu = 'A'; lu <= 'Z'; lu++)
		putchar(lu);

	putchar('\n');

	return (0);
}
