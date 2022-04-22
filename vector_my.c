#include "vector_my.h"

#define INITIAL_SIZE 3

struct Vector {
    size_t data_size;
    size_t size;
    int arr[];
};

Vector* vector_create() {
    Vector *vec = malloc(sizeof(Vector) + sizeof(int) * INITIAL_SIZE);
    vec->data_size = 0;
    vec->size = INITIAL_SIZE;
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
        vec = realloc(vec, sizeof(Vector) + vec->size);
        if (vec->arr == NULL) {
            fprintf(stderr, "null pointer");
            return 0;
        }
        if (vec->size <= vec->data_size) return 0;
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
        vec = realloc(vec, sizeof(Vector) + vec->size);
        if (vec->arr == NULL) {
            fprintf(stderr, "null pointer");
            return 0;
        }
    }

    return vec->arr[vec->data_size];
}

int vector_get_val(Vector *vec, size_t idx) {
    if (vec == (Vector*){0})

    if (idx > vec->data_size) {
        return 0;
    }

    return vec->arr[idx];
}

int vector_destroy(Vector *vec) {
    vec->size = 0;
    vec->data_size = 0;
    free(vec);
    return 1;
}
