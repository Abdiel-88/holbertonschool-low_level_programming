#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything, depending on the format.
 * @format: A string representing the data types of the arguments.
 * ...: A variable number of parameters to print.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, format_found;
char *str, *separator = "";
va_start(args, format);
while (format != NULL && format[i] != '\0')
{
format_found = 0;
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
format_found = 1;
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
format_found = 1;
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
format_found = 1;
break;
case 's':
str = va_arg(args, char *);
printf("%s%s", separator, (str != NULL) ? str : "(nil)");
format_found = 1;
break;
}
if (format_found)
{
separator = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
