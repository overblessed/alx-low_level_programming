#include <stdio.h>

/**
 * main - prints single digits in base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 2; num++)
		putchar((num % 2) + '0');

	putchar('\n');

	return (0);
}
