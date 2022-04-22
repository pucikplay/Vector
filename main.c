#include "vector_my.h"
#include <stdio.h>

int main() {

    //Vector vector;
    Vector *vector = vector_create();
    vector_push_back(vector, 3);
    vector_push_back(vector, 1);
    vector_push_back(vector, 2);
    vector_push_back(vector, 4);
    vector_push_back(vector, 5);
    vector_pop_back(vector);

    printf("v[0] = %d, v[1] = %d, v[2] = %d, v[3] = %d, size = %ld\n", vector_get_val(vector, 0), vector_get_val(vector, 1), vector_get_val(vector, 2), vector_get_val(vector, 3), vector_size(vector));

    vector_destroy(vector);

    //printf("v[0] = %d\n", vector_get_val(vector, 0));

    return 0;
}
