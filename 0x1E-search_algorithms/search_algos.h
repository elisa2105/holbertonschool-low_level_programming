#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binasearch(int *array, size_t max, size_t min, size_t size, int value);
void display(int *array, size_t min, size_t max);
#endif
