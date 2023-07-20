#include "main.h"

/**
 * times_table - TODO
 * Return: void
 */
void times_table(void)
{
	int i, t, a, tbl, y;

	for (i = 0; i <= 9; i++)
	{
		for (t = 0; t <= 9; t++)
		{
			tbl = i * t;

			if (tbl > 9)
			{
				a = tbl % 10;
				y = (tbl - a) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(y + '0');
				_putchar(a + '0');
			}
			else
			{
				if (t != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(tbl + '0');
			}
		}
		_putchar('\n');
	}
}
