#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	r.c        11-print_to_98.c        3-islower.c  6-abs                 8-main.c
	100-main.c         1-alphabet              3-main.c     6-abs.c               9-main.c
	100-times_table.c  1-alphabet.c            4-isalpha    6-main.c              9-times_table
	10-add             1-main.c                4-isalpha.c  7-last_digit          9-tiimes_table.c
	10-add.c           2-alphabet_x10          4-main.c     7-main.c              main.h
	10-main.c          2-main.c                5-main.c     7-print_last_digit.c  _putchar.c
	11-98              2-print_alphabet_x10.c  5-sign       8-24                  READ}
}
