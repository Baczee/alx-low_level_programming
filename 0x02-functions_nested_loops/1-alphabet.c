#include "main.h"

/**
 *print_alphabet - print alphabet
 *Return: Always 0.
 */

int _putchar(char c);
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
