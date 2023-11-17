#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything, depending on the format.
 * @format: A string representing the data types of the arguments.
 * ...: A variable number of parameters to print.
 */
void print_all(const char * const format, ...) {
    va_list args;
    int i = 0, j;
    char *str, format_types[] = "cifs";

    va_start(args, format);

    while (format != NULL && format[i] != '\0') {
        j = 0;
        while (format_types[j] != '\0') {
            if (format[i] == format_types[j]) {
                switch (format[i]) {
                    case 'c':
                        printf("%c", va_arg(args, int));
                        break;
                    case 'i':
                        printf("%d", va_arg(args, int));
                        break;
                    case 'f':
                        printf("%f", va_arg(args, double));
                        break;
                    case 's':
                        str = va_arg(args, char *);
                        printf("%s", (str != NULL) ? str : "(nil)");
                        break;
                }
                
                if (format[i + 1] != '\0' && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's')) {
                    printf(", ");
                }
                break;
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
