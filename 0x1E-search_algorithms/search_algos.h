#ifndef ALGO_TEST
#define ALGO_TEST
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_handler(int *array, int value,  int f, int l);
void searching_in_array(int *array, int f, int l);

#endif
