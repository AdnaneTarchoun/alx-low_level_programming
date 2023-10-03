#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *i = "_putchar";

	while (*i)
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');
	return (0);
}
