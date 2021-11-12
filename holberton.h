#ifndef MATH_H
#define MATH_H
#include <stdio.h>
#include <stdlib.h>

/* Structures */
typedef struct complex {
    double re;
    double im;
} complex;

/* Prototypes */ 
void display_complex_number(complex c);

#endif
