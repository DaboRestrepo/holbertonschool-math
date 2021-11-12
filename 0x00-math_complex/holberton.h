#ifndef MATH_H
#define MATH_H
#include <stdio.h>
#include <stdlib.h>

/* Structures */
/**
 * struct complex - Struct complex
 *
 * @re: the real number
 * @im: the imaginary number
 */
typedef struct complex
{
	double re;
	double im;
} complex;

/* Prototypes */
void display_complex_number(complex c);
complex conjugate(complex c);

#endif
