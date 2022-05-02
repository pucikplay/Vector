#include "vector.h"

#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>

#define INIT_SIZE 1

struct Vector
{
    size_t data_size;
    size_t mem_size;
    int arr[];
};

Vector* vector_create()
{
    Vector* vec = malloc(sizeof(Vector));

    *vec = (Vector){
        .data_size = 0,
        .mem_size = INIT_SIZE
    };

    return vec;
}

void vector_destroy(Vector* vec)
{
    if (!vec)
        return;

    free(vec);
}

int vector_append(Vector* vec, int new_elem)
{
    if (!vec)
        return 0;

    if (vec->data_size == vec->mem_size)
    {
        size_t new_mem_size = vec->mem_size * 2;
        vec = realloc(vec, sizeof(Vector) + sizeof(int) * new_mem_size);

        if (!vec)
            return 0;

        vec->mem_size = new_mem_size;
    }

    vec->arr[vec->data_size] = new_elem;
    vec->data_size++;

    return new_elem;
}

int vector_pop(Vector* vec)
{
    if (!vec || vec->data_size == 0)
        return 0;

    if (vec->data_size < vec->mem_size / 4)
    {
        size_t new_mem_size = vec->mem_size / 2;
        vec = realloc(vec, sizeof(Vector) + sizeof(int) * new_mem_size);

        if (!vec)
            return 0;

        vec->mem_size = new_mem_size;
    }
    
    vec->data_size--;

    return vec->arr[vec->data_size];
}

bool vector_is_empty(Vector* vec)
{
    if (!vec)
        return true;

    return vec->data_size == 0;
}

