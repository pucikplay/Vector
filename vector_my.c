#include "vector_my.h"

struct Vector vector_create() {
    Vector.arr = malloc(sizeof(int) * 3);
    Vector.data_size = 0;
    Vector.size = 3;
    return Vector;
}

size_t vector_size() {
    return Vector.data_size;
}

bool vector_isEmpty() {
    return !Vector.data_size;
}

int vector_push_back(int val) {

    if (Vector.data_size + 1 > Vector.size) {
        Vector.size *= 2;
        if (Vector.size <= Vector.data_size) return 0;
        Vector.arr = realloc(Vector.arr, Vector.size);
    }

    Vector.arr[Vector.data_size] = val;
    Vector.data_size++;

    return 1;
}

int vector_pop_back() {
    if (Vector.data_size == 0) return 0;
    Vector.data_size--;

    if (Vector.data_size < Vector.size / 4) {
        Vector.size /= 4;
        Vector.arr = realloc(Vector.arr, Vector.size);
    }

    return Vector.arr[Vector.data_size];
}

int vector_get_val(size_t idx) {
    if (idx > Vector.data_size) {
        return 0;
    }

    return Vector.arr[idx];
}
