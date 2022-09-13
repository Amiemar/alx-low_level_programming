#include "main.h"

/**
 * print_alphabet - main function
 *
 *  Description: print lowercase letters
 *
 *  Return: always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
