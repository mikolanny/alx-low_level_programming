#ifndef MAIN_H
#include "main.h"
#endif
/**
 *print_alphabet - print alphabets in lowercase
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
