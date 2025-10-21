#include <stdio.h>
/**
 * main - Point d'entree
 *
 * Return: Toujours 0 (success)
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
