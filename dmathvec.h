#ifndef DMATHVEC_H
#define DMATHVEC_H

#include "dmath.h"

// Структуры | Structures

typedef struct {
	int x, y, z;
} ivec_t;

// Функции | Functions

// Целочисленный вектор | Integer vector

ivec_t ivec_zero()
{
	ivec_t vec;
	vec.x = 0; vec.y = 0; vec.z = 0;
	return vec;
}

ivec_t ivec_make(int x, int  y, int z)
{
	ivec_t vec;
	vec.x = x; vec.y = y; vec.z = z;
	return vec;
}

ivec_t ivec_add(ivec_t vec1, ivec_t vec2)
{
	ivec_t vec;
	vec.x = vec1.x + vec2.x;
	vec.y = vec1.y + vec2.y;
	vec.z = vec1.z + vec2.z;
	return vec;
}

ivec_t ivec_sub(ivec_t vec1, ivec_t vec2)
{
	ivec_t vec;
	vec.x = vec1.x - vec2.x;
	vec.y = vec1.y - vec2.y;
	vec.z = vec1.z - vec2.z;
	return vec;
}

int ivec_len(ivec_t vec)
{
	int a = (vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z);
	int len = i_sqrt(a);
	return len;
}


#endif
