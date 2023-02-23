#include "main.h"
/**
 *jack_bauer - prints every minute in 24 hours
 *
 *Return: none
 */

void jack_bauer(void)
{
	int hr;
		int min;

		for (hr = 0; hr < 24; hr++)

		{
			for (min = 0; min < 60; min++)

			{
				_putchar('0' + (hr / 10));
				_putchar('0' + (hr % 10));
				_putchar(':');
				_putchar('0' + (min / 10));
				_putchar('0' + (min % 10));
				_putchar('\n');
										}
		}
}
