#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int c, ...);
void print_number(const *separator, const unsigned int n, ...);

#endif /*VARIADIC_FUNCTIONS*/
