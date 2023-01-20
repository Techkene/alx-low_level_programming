#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{

va_list num;
int sum = 0;
unsigned int index;

va_start(num, n);

for (index = 0; index < n; index++)
sum += va_arg(li, int);

va_end(num);
return (sum);

}
