#include "main.h"

/**
 * print_alphabet - main function
 *
 *  Description: print all the letters of the english language from a to z then a new line. The rule is that the code can only contain the _putchar function twice characters contained in _putchar
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
