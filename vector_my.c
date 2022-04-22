#include "vector_my.h"

#define initial_size 3

struct Vector {
    int *arr;
    size_t data_size;
    size_t size;
};

Vector* vector_create() {
    Vector *vec = malloc(sizeof(Vector));
    vec->arr = malloc(sizeof(int) * initial_size);
    vec->data_size = 0;
    vec->size = initial_size;
    return vec;
}

size_t vector_size(Vector *vec) {
    return vec->data_size;
}

bool vector_isEmpty(Vector *vec) {
    return vec->data_size == 0;
}

int vector_push_back(Vector *vec, int val) {

    if (vec->data_size + 1 > vec->size) {
        vec->size *= 2;
        if (vec->size <= vec->data_size) return 0;
        vec->arr = realloc(vec->arr, vec->size);
    }

    vec->arr[vec->data_size] = val;
    vec->data_size++;

    return 1;
}

int vector_pop_back(Vector *vec) {
    if (vec->data_size == 0) return 0;
    vec->data_size--;

    if (vec->data_size < vec->size / 4) {
        vec->size /= 4;
        vec->arr = realloc(vec->arr, vec->size);
    }

    return vec->arr[vec->data_size];
}

int vector_get_val(Vector *vec, size_t idx) {
    if (idx > vec->data_size) {
        return 0;
    }

    return vec->arr[idx];
}

int vector_destroy(Vector *vec) {
    free(vec->arr);
    vec->size = 0;
    vec->data_size = 0;
    free(vec);
    return 1;
}
