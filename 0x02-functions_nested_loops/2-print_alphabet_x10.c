#include "main.h"
#include "1-alphabet.c"

void print_alphabet_x10(void);

/**
 *print_alphabet_x10 - print alphabets in lowercase ten times
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	int repeat;

	for (repeat = 0; repeat <= 9; repeat++)
	{
		print_alphabet();
	}
}
