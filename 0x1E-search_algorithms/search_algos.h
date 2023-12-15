#ifndef MAIN__H
#define MAIN__H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

void print_range(int *array, size_t left, size_t right);

int binary_search2(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
