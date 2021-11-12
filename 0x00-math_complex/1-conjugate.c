#include "holberton.h"
/**
 * conjugate - Return the conjugate complex number
 * @c: struct.
 * Return: The conjugate complex number.
 */

complex conjugate(complex c)
{
	if (c.re && !c.im)
	{
		c.re = c.re;
	}
	else if (!c.re && c.im)
	{
		c.im *= -1;
	}
	else if (c.re && c.im)
	{
		c.re = c.re;
		c.im *= -1;
	}
	return (c);
}
