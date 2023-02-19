#include <stdio.h>

/**
 * main - prints alpha in lower case
 * followed by new line, expect q and e
 * Return: 0
 */
int main(void)

{
	char la;

	for (la = 'a'; lc <= 'z'; lc++)
	{
		if (la != 'e' && la != 'q')
		putchar(la);
	}
	putchar('\n');

	return (0);
}
