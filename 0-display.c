#include "holberton.h"
/**
 * display_complex_number - Display the complex number.
 * @c: data to print.
 *
 */

void display_complex_number(complex c)
{
	if (c.im == 0)
	{
		printf("%.0f\n", c.re);
	}
	if (c.im > 0)
	{
		printf("%.0f + %.0fi\n", c.re, c.im);
	}
	else if (c.im < 0)
	printf("%.0f - %.0fi\n", c.re, -c.im);
}
