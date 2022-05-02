#include <stdio.h>

#include "vector.h"

int main(void)
{
    printf("This is a tester program for vector.h\n");

    size_t n;
    scanf("%ld", &n);

    int test_arr[n];

    Vector* vec = vector_create();

    for (size_t i = 0; i < n; i++)
    {
        test_arr[i] = i;
        vector_append(vec, i);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("Vector: %d, test_arr: %d\n", vector_pop(vec), test_arr[n - 1 - i]);
    }

    vector_is_empty(vec) ? printf("true\n") : printf("false\n");
}