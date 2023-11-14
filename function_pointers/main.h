#ifndef MAIN_H
#define MAIN_H

/* Prototype for the function print_name */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* MAIN_H */
