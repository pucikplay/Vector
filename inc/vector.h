#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <stdbool.h>

#define struct Vector Vector;


Vector* vector_create();
//size_t vector_init(Vector* vec, int value);
void vector_destroy(Vector* vec);
int vector_append(Vector* vec, int new_elem);
int vector_pop(Vector* vec);
bool vector_is_empty(Vector* vec);

#endif //VECTOR_H