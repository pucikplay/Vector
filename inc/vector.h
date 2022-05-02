#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <stdbool.h>

typedef struct Vector Vector;

Vector* vector_create(void);
void vector_destroy(Vector* vec);
int vector_append(Vector* vec, int new_elem);
int vector_pop(Vector* vec, int* elem_dest);
bool vector_is_empty(Vector* vec);

#endif //VECTOR_H
