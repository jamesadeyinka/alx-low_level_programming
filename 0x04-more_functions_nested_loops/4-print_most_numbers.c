#include "main.h"
/**
 * print_most_numbers - print num except 2 an 4
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchart(c);
	}
	_putchar('\n')
}
