#include "vector_my.h"
#include <stdio.h>

int main() {

    struct Vector vector = vector_create();
    vector_push_back(3);
    vector_push_back(1);
    vector_push_back(2);
    vector_push_back(4);
    vector_push_back(5);
    vector_pop_back();

    printf("v[0] = %d, v[1] = %d, v[2] = %d, v[3] = %d, size = %ld\n", vector_get_val(0), vector_get_val(1), vector_get_val(2), vector_get_val(3), vector_size());

    return 0;
}
