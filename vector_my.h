#ifndef VECTOR_MY
#define VECTOR_MY

#include <stdlib.h>
#include <stdbool.h>

typedef struct Vector Vector;

Vector* vector_create();
size_t vector_size(Vector *vec);
bool vector_isEmpty(Vector *vec);
int vector_push_back(Vector *vec, int val);
int vector_pop_back(Vector *vec);
int vector_get_val(Vector *vec, size_t idx);
int vector_destroy(Vector *vec);

#endif //VECTOR_MY
