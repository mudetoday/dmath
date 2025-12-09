#ifndef DMATHVEC_H
#define DMATHVEC_H

#include "dmath.h"

// Структуры | Structures

typedef struct {
	int x, y, z;
} ivec_t;

// Константы | Constants

const ivec_t ivec_zero    = { 0, 0, 0 };
const ivec_t ivec_right   = { 1, 0, 0 };
const ivec_t ivec_forward = { 0, 1, 0 };
const ivec_t ivec_up 	  = { 0, 0, 1 };
const ivec_t ivec_left 	  = {-1, 0, 0 };
const ivec_t ivec_back    = { 0,-1, 0 };
const ivec_t ivec_down    = { 0, 0,-1 };

// Функции | Functions

// Целочисленный вектор | Integer vector

ivec_t ivec_make(int x, int  y, int z)
{
	ivec_t vec;
	vec.x = x; vec.y = y; vec.z = z;
	return vec;
}

ivec_t ivec_add_ivec(ivec_t vec1, ivec_t vec2)
{
	ivec_t vec;
	vec.x = vec1.x + vec2.x;
	vec.y = vec1.y + vec2.y;
	vec.z = vec1.z + vec2.z;
	return vec;
}

ivec_t ivec_sub_ivec(ivec_t vec1, ivec_t vec2)
{
	ivec_t vec;
	vec.x = vec1.x - vec2.x;
	vec.y = vec1.y - vec2.y;
	vec.z = vec1.z - vec2.z;
	return vec;
}

ivec_t ivec_mul_ivec(ivec_t vec1, ivec_t vec2)
{
	ivec_t vec;
	vec.x = vec1.x * vec2.x;
	vec.y = vec1.x * vec2.x;
	vec.z = vec1.z * vec2.z;
	return vec;
}

int ivec_len(ivec_t vec)
{
	int a = (vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z);
	int len = i_sqrt(a);
	return len;
}

#endif
