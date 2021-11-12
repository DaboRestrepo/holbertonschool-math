#include "holberton.h"
/**
 * display_complex_number - Display the complex number.
 * @c: data to print.
 *
 */

void display_complex_number(complex c)
{
	if (c.re && !c.im)
	{
		printf("%.0f\n", c.re);
	}
	if (c.im)
	{
		if (c.im > 0)
		{
			if (c.im == 1)
				printf("%.0f + i\n", c.re);
			printf("%.0f + %.0fi\n", c.re, c.im);
		}	
		else if (c.im < 0)
		{
			if (c.im == -1)
				printf("%.0f - i\n", c.re);
			printf("%.0f - %.0fi\n", c.re, -c.im);
		}
	}
}

