#ifndef VECTOR_MY
#define VECTOR_MY

#include "vector_my.h"
#include <stdlib.h>
#include <stdbool.h>

struct Vector
{
    int *arr;
    size_t data_size;
    size_t size;
} Vector;

struct Vector vector_create();
size_t vector_size();
bool vector_isEmpty();
int vector_push_back(int val);
int vector_pop_back();
int vector_get_val(size_t idx);
int vector_destroy();

#endif //VECTOR_MY
